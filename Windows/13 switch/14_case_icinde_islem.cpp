#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    /* case etiketlerinde yalnızca doğrudan yazılmış
     * sabit değerler değil, sabit ifadeler de kullanılabilir.
     * Bu ifadeler derleme zamanında hesaplanır.
     * Örneğin case 2+3 yazmakla case 5 yazmak aynı anlama gelir. */

    switch (sayi)
    {
        case 2 + 3:
            cout << "Sayı 5'tir." << endl;
            break;
        case 2 * 3:
            cout << "Sayı 6'dır." << endl;
            break;
        case 10 - 3:
            cout << "Sayı 7'dir." << endl;
            break;
        default:
            cout << "Sayı 5, 6 veya 7 değildir." << endl;
            break;
    }

    return 0;
}
