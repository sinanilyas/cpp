#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* Karakter komutları İngiliz alfabesine göre çalışır.
     * Türkçede i harfinin büyüğü İ, I harfinin küçüğü ı olduğu halde
     * toupper ve tolower bu harfleri İngilizcedeki gibi çevirir. */

    char sonuc1 = toupper('i');
    cout << sonuc1 << endl; // I (Türkçede İ olmalıydı)

    char sonuc2 = tolower('I');
    cout << sonuc2 << endl; // i (Türkçede ı olmalıydı)

    /* ç, ğ, ı, ö, ş, ü gibi Türkçe harfler UTF-8 kodlamasında tek bir char
     * değişkenine sığmaz. Bu yüzden bu harfler karakter komutlarıyla
     * sınanamaz ve çevrilemez. Örneğin
     *    char sonuc3 = tolower('Ğ');
     * yazılırsa derleyici uyarı verir ve anlamsız bir karakter yazdırılabilir. */

    return 0;
}
