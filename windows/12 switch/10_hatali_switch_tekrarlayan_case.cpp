#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 2;

    /* HATA: Ayný switch içerisinde birden fazla
     * case ayný deðere sahip olamaz. */

    switch (sayi)
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case 2:
            cout << "Ýki" << endl;
            break;
        case 2: // HATA: case 2 daha önce tanýmlandý.
            cout << "Yine iki" << endl;
            break;
    }

    return 0;
}
