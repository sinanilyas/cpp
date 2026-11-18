#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int mevsimNo;

    cout << "Mevsim numarasýný giriniz (1-4): ";
    cin >> mevsimNo;

    /* Eðer kullanýcý 1-4 dýþýnda bir sayý girerse
     * hiçbir case eþleþmez ve default çalýþtýrýlýr. */

    switch (mevsimNo)
    {
        case 1:
            cout << "Ýlkbahar" << endl;
            break;
        case 2:
            cout << "Yaz" << endl;
            break;
        case 3:
            cout << "Sonbahar" << endl;
            break;
        case 4:
            cout << "Kýþ" << endl;
            break;
        default:
            cout << "Geçersiz mevsim numarasý!" << endl;
            break;
    }

    return 0;
}
