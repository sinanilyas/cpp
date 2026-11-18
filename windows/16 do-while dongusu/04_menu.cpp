#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int secim;

    /* Menü en az bir kez gösterilir.
     * Kullanýcý 0 seçeneðini seçene kadar
     * menü tekrar gösterilmeye devam edilir. */

    do
    {
        cout << endl;
        cout << "--- MENÜ ---" << endl;
        cout << "1. Merhaba yazdýr" << endl;
        cout << "2. Hoþça kal yazdýr" << endl;
        cout << "0. Çýkýþ" << endl;
        cout << "Seçiminiz: ";
        cin >> secim;

        if (secim == 1)
            cout << "Merhaba!" << endl;
        else if (secim == 2)
            cout << "Hoþça kal!" << endl;
        else if (secim != 0)
            cout << "Geçersiz seçim!" << endl;

    } while (secim != 0);

    cout << "Program sonlandýrýldý." << endl;

    return 0;
}
