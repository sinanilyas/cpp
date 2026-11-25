#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    /* srand() aynı tohum değeriyle tekrar çağrılırsa
     * sayı dizisi baştan başlar ve aynı sayılar yeniden üretilir.
     * Diğer sistemlerde sayılar farklıdır, ama iki satırda da
     * aynı sayılar yazdırılır. */

    srand(5);

    for (int i = 1; i <= 3; i++)
    {
        cout << rand() << " ";
    }
    cout << endl; // Windows'ta genellikle: 54 28693 12255

    srand(5);

    for (int i = 1; i <= 3; i++)
    {
        cout << rand() << " ";
    }
    cout << endl; // Windows'ta genellikle: 54 28693 12255

    return 0;
}
