#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = car;

    /* enum tipli değişkenler switch içerisinde kullanılabilir.
     * case ifadelerinde enum elemanlarının isimleri yazılabilir. */

    switch (bugun)
    {
        case pts:
            cout << "Pazartesi" << endl;
            break;
        case sal:
            cout << "Salı" << endl;
            break;
        case car:
            cout << "Çarşamba" << endl;
            break;
        case per:
            cout << "Perşembe" << endl;
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
