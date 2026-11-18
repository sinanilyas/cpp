#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    double sayi = 2.5;

    /* HATA: switch ifadesinde
     * float ve double kullanýlamaz. */

    switch (sayi) // HATA: double tipi kullanýlamaz.
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case 2:
            cout << "Ýki" << endl;
            break;
    }

    return 0;
}
