#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Karakter komutları İngiliz alfabesine göre çalışır.
     * Türkçede i harfinin büyüğü İ, I harfinin küçüğü ı olduğu halde
     * toupper ve tolower bu harfleri İngilizcedeki gibi çevirir. */
    char sonuc1 = toupper('i');
    char sonuc2 = tolower('I');

    cout << sonuc1 << endl; // I (Türkçede İ olmalıydı)
    cout << sonuc2 << endl; // i (Türkçede ı olmalıydı)

    /* ç, ğ, ı, ö, ş, ü gibi Türkçe harfler UTF-8 kodlamasında tek bir char
     * değişkenine sığmaz. Bu yüzden bu harfler karakter komutlarıyla
     * sınanamaz ve çevrilemez. */

    return 0;
}
