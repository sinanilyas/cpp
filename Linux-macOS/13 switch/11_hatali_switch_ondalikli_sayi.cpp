#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
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
