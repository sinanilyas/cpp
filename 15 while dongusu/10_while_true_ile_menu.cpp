#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int secim;

    // Kullanýcý çýkýþ yapana kadar menü tekrar gösterilir.
    while (true)
    {
        cout << endl;
        cout << "1. Merhaba yazdýr" << endl;
        cout << "2. Ýyi günler yazdýr" << endl;
        cout << "0. Çýkýþ" << endl;
        cout << "Seçiminiz: ";
        cin >> secim;

        switch (secim)
        {
            case 1:
                cout << "Merhaba!" << endl;
                break;
            case 2:
                cout << "Ýyi günler!" << endl;
                break;
            case 0:
                cout << "Program sona erdi." << endl;
                break;
            default:
                cout << "Geçersiz seçim!" << endl;
        }

        /* switch içindeki break yalnýzca switch'i sonlandýrýr,
         * while döngüsünü sonlandýrmaz. */

        // Seçim 0 ise while döngüsü sonlandýrýlýr
        if (secim == 0) break;
    }

    return 0;
}
