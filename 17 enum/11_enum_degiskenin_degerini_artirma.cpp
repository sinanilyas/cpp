#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    /* enum deðerleriyle aritmetik iþlem yapýlabilir.
     * Ancak iþlemin sonucu int tipindedir. */
    int sonuc = bugun + 1;

    /* int tipinden enum tipine örtük dönüþüm yapýlamaz.
     * static_cast ile açýk dönüþüm yapýlmalýdýr. */
    gun yarin = static_cast<gun>(sonuc);

    cout << bugun << endl; // 3
    cout << yarin << endl; // 4

    return 0;
}
