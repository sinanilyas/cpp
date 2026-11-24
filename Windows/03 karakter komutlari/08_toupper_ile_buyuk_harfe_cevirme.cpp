#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* toupper komutu, küçük harfi büyük harfe çevirir.
     * Sonuç char tipli bir değişkene atanır.
     * Küçük harf olmayan karakterler değişmez. */

    char sonuc1 = toupper('f');
    cout << sonuc1 << endl; // F

    char sonuc2 = toupper('F');
    cout << sonuc2 << endl; // F

    char sonuc3 = toupper('%');
    cout << sonuc3 << endl; // %

    return 0;
}
