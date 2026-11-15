#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* <cctype> içindeki fonksiyonlar tek bir karakteri sýnar ya da
     * dönüþtürür.
     *
     * is ile baþlayan fonksiyonlar, koþul doðruysa 0'dan farklý bir
     * tamsayý, yanlýþsa 0 döndürür. Döndürülen sayý derleyiciye göre
     * deðiþebileceði için sonuçlar bool tipine dönüþtürülerek
     * true/false biçiminde yazdýrýlýyor. */
    cout << boolalpha;

    // Rakam mý?
    cout << static_cast<bool>(isdigit('9')) << endl; // true
    cout << static_cast<bool>(isdigit('R')) << endl; // false

    // Harf mi?
    cout << static_cast<bool>(isalpha('9')) << endl; // false
    cout << static_cast<bool>(isalpha('R')) << endl; // true
    cout << static_cast<bool>(isalpha('%')) << endl; // false

    // Harf veya rakam mý?
    cout << static_cast<bool>(isalnum('9')) << endl; // true
    cout << static_cast<bool>(isalnum('R')) << endl; // true
    cout << static_cast<bool>(isalnum('%')) << endl; // false

    // 16'lýk sayý sistemindeki bir rakam mý? (0-9, A-F, a-f)
    cout << static_cast<bool>(isxdigit('9')) << endl; // true
    cout << static_cast<bool>(isxdigit('F')) << endl; // true
    cout << static_cast<bool>(isxdigit('G')) << endl; // false

    // Küçük harf mi?
    cout << static_cast<bool>(islower('f')) << endl; // true
    cout << static_cast<bool>(islower('F')) << endl; // false

    // Büyük harf mi?
    cout << static_cast<bool>(isupper('f')) << endl; // false
    cout << static_cast<bool>(isupper('F')) << endl; // true

    /* tolower ve toupper dönüþtürülen karakterin ASCII kodunu int
     * olarak döndürür. Karakter olarak yazdýrmak için char tipine
     * dönüþtürülür. Harf olmayan karakterler deðiþtirilmez. */

    // Küçük harfe çevir
    cout << static_cast<char>(tolower('f')) << endl; // f
    cout << static_cast<char>(tolower('F')) << endl; // f
    cout << static_cast<char>(tolower('%')) << endl; // %

    // Büyük harfe çevir
    cout << static_cast<char>(toupper('f')) << endl; // F
    cout << static_cast<char>(toupper('F')) << endl; // F
    cout << static_cast<char>(toupper('%')) << endl; // %

    // Beyaz boþluk karakteri mi? (boþluk, sekme, yeni satýr, satýr baþý...)
    cout << static_cast<bool>(isspace(' ')) << endl;  // true
    cout << static_cast<bool>(isspace('\t')) << endl; // true
    cout << static_cast<bool>(isspace('\n')) << endl; // true
    cout << static_cast<bool>(isspace('\r')) << endl; // true
    cout << static_cast<bool>(isspace('F')) << endl;  // false

    // Kontrol karakteri mi? (ekranda görünmeyen, ASCII kodu 0-31 veya 127 olan karakterler)
    cout << static_cast<bool>(iscntrl('\0')) << endl; // true
    cout << static_cast<bool>(iscntrl('\t')) << endl; // true
    cout << static_cast<bool>(iscntrl('\n')) << endl; // true
    cout << static_cast<bool>(iscntrl('\b')) << endl; // true
    cout << static_cast<bool>(iscntrl('F')) << endl;  // false

    /* Türkçe harfler (Ç, Ð, Ý, Ö, Þ, Ü...) ASCII tablosunun 128-255
     * aralýðýndadýr ve char tipinde negatif bir sayý olarak saklanabilir.
     * Bu fonksiyonlara negatif sayý verilmemelidir. Bu nedenle Türkçe
     * harfler unsigned char tipinde saklanýr. Sonuç, programýn dil
     * ayarýna göre deðiþebilir. */
    unsigned char harf = 'Ð';

    cout << static_cast<bool>(isalpha(harf)) << endl; // Genellikle true
    cout << static_cast<bool>(isupper(harf)) << endl; // Genellikle true
    cout << static_cast<char>(tolower(harf)) << endl; // Genellikle ð

    return 0;
}
