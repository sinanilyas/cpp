#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 2;

    /* HATA: Aynı switch içerisinde birden fazla
     * case aynı değere sahip olamaz. */

    switch (sayi)
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case 2:
            cout << "İki" << endl;
            break;
        case 2: // HATA: case 2 daha önce tanımlandı.
            cout << "Yine iki" << endl;
            break;
    }

    return 0;
}
