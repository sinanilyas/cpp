#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int secim;

    // Kullanıcı çıkış yapana kadar menü tekrar gösterilir.
    while (true)
    {
        cout << endl;
        cout << "1. Merhaba yazdır" << endl;
        cout << "2. İyi günler yazdır" << endl;
        cout << "0. Çıkış" << endl;
        cout << "Seçiminiz: ";
        cin >> secim;

        switch (secim)
        {
            case 1:
                cout << "Merhaba!" << endl;
                break;
            case 2:
                cout << "İyi günler!" << endl;
                break;
            case 0:
                cout << "Program sona erdi." << endl;
                break;
            default:
                cout << "Geçersiz seçim!" << endl;
        }

        /* switch içindeki break yalnızca switch'i sonlandırır,
         * while döngüsünü sonlandırmaz. */

        // Seçim 0 ise while döngüsü sonlandırılır
        if (secim == 0) break;
    }

    return 0;
}
