#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int gunNo;

    cout << "Haftanın gün numarasını giriniz (1-7): ";
    cin >> gunNo;

    /* Birden fazla case aynı komutları çalıştırabilir.
     * Örneğin kullanıcı 1, 2, 3, 4 veya 5 girerse
     * ekrana "Hafta içi" yazdırılır. */

    switch (gunNo)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Hafta içi" << endl;
            break;
        case 6:
        case 7:
            cout << "Hafta sonu" << endl;
            break;
        default:
            cout << "Geçersiz gün numarası!" << endl;
            break;
    }

    return 0;
}
