#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* <cctype> içindeki fonksiyonlar tek bir karakteri sınar ya da
     * dönüştürür.
     *
     * is ile başlayan fonksiyonlar, koşul doğruysa 0'dan farklı bir
     * tamsayı, yanlışsa 0 döndürür. Döndürülen sayı derleyiciye göre
     * değişebileceği için sonuçlar bool tipine dönüştürülerek
     * true/false biçiminde yazdırılıyor. */
    cout << boolalpha;

    // Rakam mı?
    cout << static_cast<bool>(isdigit('9')) << endl; // true
    cout << static_cast<bool>(isdigit('R')) << endl; // false

    // Harf mi?
    cout << static_cast<bool>(isalpha('9')) << endl; // false
    cout << static_cast<bool>(isalpha('R')) << endl; // true
    cout << static_cast<bool>(isalpha('%')) << endl; // false

    // Harf veya rakam mı?
    cout << static_cast<bool>(isalnum('9')) << endl; // true
    cout << static_cast<bool>(isalnum('R')) << endl; // true
    cout << static_cast<bool>(isalnum('%')) << endl; // false

    // 16'lık sayı sistemindeki bir rakam mı? (0-9, A-F, a-f)
    cout << static_cast<bool>(isxdigit('9')) << endl; // true
    cout << static_cast<bool>(isxdigit('F')) << endl; // true
    cout << static_cast<bool>(isxdigit('G')) << endl; // false

    // Küçük harf mi?
    cout << static_cast<bool>(islower('f')) << endl; // true
    cout << static_cast<bool>(islower('F')) << endl; // false

    // Büyük harf mi?
    cout << static_cast<bool>(isupper('f')) << endl; // false
    cout << static_cast<bool>(isupper('F')) << endl; // true

    /* tolower ve toupper dönüştürülen karakterin ASCII kodunu int
     * olarak döndürür. Karakter olarak yazdırmak için char tipine
     * dönüştürülür. Harf olmayan karakterler değiştirilmez. */

    // Küçük harfe çevir
    cout << static_cast<char>(tolower('f')) << endl; // f
    cout << static_cast<char>(tolower('F')) << endl; // f
    cout << static_cast<char>(tolower('%')) << endl; // %

    // Büyük harfe çevir
    cout << static_cast<char>(toupper('f')) << endl; // F
    cout << static_cast<char>(toupper('F')) << endl; // F
    cout << static_cast<char>(toupper('%')) << endl; // %

    // Beyaz boşluk karakteri mi? (boşluk, sekme, yeni satır, satır başı...)
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

    /* Bu fonksiyonlar İngiliz alfabesindeki harflerle doğru çalışır.
     * Türkçe harflerde (ç, ğ, ı, ö, ş, ü...) farklı sonuçlar oluşabilir. */

    return 0;
}
