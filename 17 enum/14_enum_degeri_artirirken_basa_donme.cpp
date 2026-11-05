#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = paz;
    gun yarin;

    /* Günün deðeri 1 artýrýlarak yarýn hesaplanýr.
     * Ancak pazar gününden sonra pazartesi gelmelidir. */

    if (bugun == paz) yarin = pts;
    else yarin = static_cast<gun>(bugun + 1);

    cout << "Bugün: " << bugun << endl; // 7
    cout << "Yarýn: " << yarin << endl; // 1

    return 0;
}
