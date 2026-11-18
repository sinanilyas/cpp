#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int gunNo;

    cout << "Haftanýn gün numarasýný giriniz (1-7): ";
    cin >> gunNo;

    /* Birden fazla case ayný komutlarý çalýþtýrabilir.
     * Örneðin kullanýcý 1, 2, 3, 4 veya 5 girerse
     * ekrana "Hafta içi" yazdýrýlýr. */

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
            cout << "Geçersiz gün numarasý!" << endl;
            break;
    }

    return 0;
}
