#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double sayi = 2.5;

    /* HATA: switch ifadesinde
     * float ve double kullanılamaz. */

    switch (sayi) // HATA: double tipi kullanılamaz.
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case 2:
            cout << "İki" << endl;
            break;
    }

    return 0;
}
