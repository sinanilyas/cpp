#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    gun bugun = paz;
    gun yarin;

    /* Günün değeri 1 artırılarak yarın hesaplanır.
     * Ancak pazar gününden sonra pazartesi gelmelidir. */

    if (bugun == paz) yarin = pts;
    else yarin = static_cast<gun>(bugun + 1);

    cout << "Bugün: " << bugun << endl; // 7
    cout << "Yarın: " << yarin << endl; // 1

    return 0;
}
