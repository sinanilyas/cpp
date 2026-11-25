#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int secim;

    /* Menü en az bir kez gösterilir.
     * Kullanıcı 0 seçeneğini seçene kadar
     * menü tekrar gösterilmeye devam edilir. */

    do
    {
        cout << endl;
        cout << "--- MENÜ ---" << endl;
        cout << "1. Merhaba yazdır" << endl;
        cout << "2. Hoşça kal yazdır" << endl;
        cout << "0. Çıkış" << endl;
        cout << "Seçiminiz: ";
        cin >> secim;

        if (secim == 1)
            cout << "Merhaba!" << endl;
        else if (secim == 2)
            cout << "Hoşça kal!" << endl;
        else if (secim != 0)
            cout << "Geçersiz seçim!" << endl;

    } while (secim != 0);

    cout << "Program sonlandırıldı." << endl;

    return 0;
}
