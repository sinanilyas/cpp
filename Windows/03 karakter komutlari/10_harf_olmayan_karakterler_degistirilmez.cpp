#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* toupper ve tolower yalnızca harfleri çevirir.
     * Harf olmayan karakterler olduğu gibi kalır. */
    char sonuc1 = toupper('%');
    char sonuc2 = tolower('5');

    cout << sonuc1 << endl; // %
    cout << sonuc2 << endl; // 5

    /* Büyük harfe 'a' - 'A' (32) eklenerek de küçük harf elde edilebilir.
     * Ancak bu yöntem harf olmayan karakterleri de değiştirir. */
    char sonuc3 = '5' + ('a' - 'A');

    cout << sonuc3 << endl; // U

    return 0;
}
