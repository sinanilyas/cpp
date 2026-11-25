#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    for (int i = 0; i < 10; i++)
    {
        cout << ++i << endl;
    }

    /* i değişkeni döngü gövdesinde ekrana yazdırılmadan önce
     * artırıldığı için ekrana 1, 3, 5, 7 ve 9 yazdırılır. */

    return 0;
}
