#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* tolower komutu, büyük harfi küçük harfe çevirir.
     * Sonuç char tipli bir değişkene atanır.
     * Küçük harf olan karakter değişmez. */
    char sonuc1 = tolower('F');
    char sonuc2 = tolower('f');

    cout << sonuc1 << endl; // f
    cout << sonuc2 << endl; // f

    return 0;
}
