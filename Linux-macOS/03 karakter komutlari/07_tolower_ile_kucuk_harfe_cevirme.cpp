#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* tolower komutu, büyük harfi küçük harfe çevirir.
     * Sonuç char tipli bir değişkene atanır.
     * Büyük harf olmayan karakterler değişmez. */

    char sonuc1 = tolower('F');
    cout << sonuc1 << endl; // f

    char sonuc2 = tolower('f');
    cout << sonuc2 << endl; // f

    char sonuc3 = tolower('%');
    cout << sonuc3 << endl; // %

    return 0;
}
