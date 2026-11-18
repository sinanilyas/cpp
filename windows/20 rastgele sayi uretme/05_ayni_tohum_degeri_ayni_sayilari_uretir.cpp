#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* srand() aynı tohum değeriyle tekrar çağrılırsa
     * sayı dizisi baştan başlar ve aynı sayılar yeniden üretilir. */

    srand(5);

    for (int i = 1; i <= 3; i++)
    {
        cout << rand() << " ";
    }
    cout << endl; // Genellikle: 54 28693 12255

    srand(5);

    for (int i = 1; i <= 3; i++)
    {
        cout << rand() << " ";
    }
    cout << endl; // Genellikle: 54 28693 12255

    return 0;
}
