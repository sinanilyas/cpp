# Windows klasöründeki örneklerden Linux-macOS klasörünü üretir.
#
# .cpp dosyalarında:
#   - #include <windows.h> satırı silinir.
#   - SetConsoleCP(CP_UTF8); ve SetConsoleOutputCP(CP_UTF8); komutları ve
#     arkalarından gelen boş satır silinir.
#   - system("pause"); komutu yoruma dönüştürülür.
#   - YORUMA_DONUSTUR listesindeki dosyalarda #include <windows.h> ve iki
#     SetConsole komutu silinmez, yoruma dönüştürülür.
# Dosyaların geri kalanı (satır sonları dahil) olduğu gibi kalır.
# Resim ve videolar olduğu gibi kopyalanır.
#
# Linux-macOS klasörü her çalışmada baştan üretilir. Bu klasörde elle
# yapılan değişiklikler bir sonraki çalışmada kaybolur; değişiklikler
# Windows klasöründe yapılmalıdır.

import re
import shutil
import sys
from pathlib import Path

KOK = Path(__file__).resolve().parents[2]
KAYNAK = KOK / "Windows"
HEDEF = KOK / "Linux-macOS"

# Bu dosyalarda Windows'a özgü komutlar silinmez, yoruma dönüştürülür.
# Dosyanın adı ya da numarası değişirse burası da güncellenmelidir.
YORUMA_DONUSTUR = {
    "01 giris/07_turkce_karakterler.cpp",
}

KOD_UZANTILARI = {".cpp", ".h", ".hpp"}
ATLANAN_UZANTILAR = {".exe", ".o", ".obj"}

SETCONSOLE = r"SetConsole(?:Output)?CP\s*\(\s*CP_UTF8\s*\)\s*;"

# Satırın tamamı olan (birden fazla satıra yayılmış olabilir) SetConsole
# komutları ve arkalarından gelen tek bir boş satır.
SETCONSOLE_SATIRLARI = re.compile(
    r"^(?:[ \t]*" + SETCONSOLE + r"[ \t]*\r?\n)+(?:[ \t]*\r?\n)?", re.M)
# Başka kodlarla aynı satırda yazılmış SetConsole komutları.
SETCONSOLE_SATIR_ICI = re.compile(SETCONSOLE)
WINDOWS_H_SATIRI = re.compile(
    r"^[ \t]*#[ \t]*include[ \t]*<windows\.h>[^\r\n]*\r?\n", re.M)
SYSTEM_PAUSE = re.compile(r'^([ \t]*)(system\s*\(\s*"pause"\s*\)\s*;)', re.M)

YORUMA_ALINACAKLAR = re.compile(
    r"^([ \t]*)(#[ \t]*include[ \t]*<windows\.h>|" + SETCONSOLE + r")", re.M)

ACIKLAMALAR = re.compile(r"/\*.*?\*/|//[^\r\n]*", re.S)
KALMAMASI_GEREKENLER = re.compile(r"SetConsole|CP_UTF8|windows\.h")


def donustur(metin, yoruma_donustur):
    if yoruma_donustur:
        metin, sayi = YORUMA_ALINACAKLAR.subn(r"\1// \2", metin)
        if sayi == 0:
            raise ValueError("yoruma dönüştürülecek komut bulunamadı")
    else:
        metin = WINDOWS_H_SATIRI.sub("", metin)
        metin = SETCONSOLE_SATIRLARI.sub("", metin)
        metin = SETCONSOLE_SATIR_ICI.sub("", metin)
    metin = SYSTEM_PAUSE.sub(r"\1// \2", metin)

    # Açıklamaların dışında Windows'a özgü bir şey kalmamalı.
    kod = ACIKLAMALAR.sub("", metin)
    if KALMAMASI_GEREKENLER.search(kod):
        raise ValueError("Windows'a özgü komut silinemedi")
    return metin


def main():
    if not KAYNAK.is_dir():
        sys.exit(f"HATA: {KAYNAK.name} klasörü bulunamadı.")

    for ad in YORUMA_DONUSTUR:
        if not (KAYNAK / ad).is_file():
            sys.exit(f"HATA: YORUMA_DONUSTUR listesindeki dosya bulunamadı: {ad}")

    if HEDEF.exists():
        shutil.rmtree(HEDEF)

    hatalar = []
    for kaynak in sorted(KAYNAK.rglob("*")):
        if not kaynak.is_file():
            continue
        uzanti = kaynak.suffix.lower()
        if uzanti in ATLANAN_UZANTILAR:
            continue
        goreli = kaynak.relative_to(KAYNAK).as_posix()
        hedef = HEDEF / goreli
        hedef.parent.mkdir(parents=True, exist_ok=True)

        if uzanti not in KOD_UZANTILARI:
            shutil.copyfile(kaynak, hedef)
            continue

        try:
            metin = kaynak.read_bytes().decode("utf-8")
            metin = donustur(metin, goreli in YORUMA_DONUSTUR)
        except UnicodeDecodeError:
            hatalar.append(f"{goreli}: UTF-8 değil")
            continue
        except ValueError as hata:
            hatalar.append(f"{goreli}: {hata}")
            continue
        hedef.write_bytes(metin.encode("utf-8"))

    if hatalar:
        print("HATA: Şu dosyalar dönüştürülemedi:")
        for satir in hatalar:
            print("  " + satir)
        sys.exit(1)

    print("Linux-macOS klasörü üretildi.")


if __name__ == "__main__":
    main()
