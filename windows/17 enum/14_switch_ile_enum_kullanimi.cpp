#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    /* enum tipli deðiþkenler switch içerisinde kullanýlabilir.
     * case ifadelerinde enum elemanlarýnýn isimleri yazýlabilir. */

    switch (bugun)
    {
        case pts:
            cout << "Pazartesi" << endl;
            break;
        case sal:
            cout << "Salý" << endl;
            break;
        case car:
            cout << "Çarþamba" << endl;
            break;
        case per:
            cout << "Perþembe" << endl;
            break;
        case cum:
            cout << "Cuma" << endl;
            break;
        case cts:
            cout << "Cumartesi" << endl;
            break;
        case paz:
            cout << "Pazar" << endl;
            break;
    }

    return 0;
}
