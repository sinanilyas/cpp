#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char harfNotu;

    cout << "Harf notunuzu giriniz (A-F): ";
    cin >> harfNotu;

    /* switch yalnızca tamsayılarla değil,
     * char tipindeki değerlerle de kullanılabilir.
     * Örneğin kullanıcı B girerse "İyi" yazdırılır. */

    switch (harfNotu)
    {
        case 'A':
            cout << "Pekiyi" << endl;
            break;
        case 'B':
            cout << "İyi" << endl;
            break;
        case 'C':
            cout << "Orta" << endl;
            break;
        case 'D':
            cout << "Geçer" << endl;
            break;
        case 'F':
            cout << "Başarısız" << endl;
            break;
        default:
            cout << "Geçersiz harf notu!" << endl;
            break;
    }

    return 0;
}
