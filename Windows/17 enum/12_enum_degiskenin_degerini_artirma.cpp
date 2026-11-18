#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = car;

    /* enum değerleriyle aritmetik işlem yapılabilir.
     * Ancak işlemin sonucu int tipindedir. */
    int sonuc = bugun + 1;

    /* int tipinden enum tipine örtük dönüşüm yapılamaz.
     * static_cast ile açık dönüşüm yapılmalıdır. */
    gun yarin = static_cast<gun>(sonuc);

    cout << bugun << endl; // 3
    cout << yarin << endl; // 4

    return 0;
}
