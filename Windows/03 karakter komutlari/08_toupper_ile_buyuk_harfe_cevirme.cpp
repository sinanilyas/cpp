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
     * Büyük harf olan karakter değişmez. */
    char sonuc1 = toupper('f');
    char sonuc2 = toupper('F');

    cout << sonuc1 << endl; // F
    cout << sonuc2 << endl; // F

    return 0;
}
