#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int mevsimNo;

    cout << "Mevsim numarasýný giriniz (1-4): ";
    cin >> mevsimNo;

    /* Eðer kullanýcý
     * 1 girerse Ýlkbahar Yaz Sonbahar Kýþ yazdýrýlýr.
     * 2 girerse Yaz Sonbahar Kýþ yazdýrýlýr.
     * 3 girerse Sonbahar Kýþ yazdýrýlýr.
     * 4 girerse Kýþ yazdýrýlýr. */

    switch (mevsimNo)
    {
        case 1:
            cout << "Ýlkbahar" << endl;
        case 2:
            cout << "Yaz" << endl;
        case 3:
            cout << "Sonbahar" << endl;
        case 4:
            cout << "Kýþ" << endl;
    }

    return 0;
}
