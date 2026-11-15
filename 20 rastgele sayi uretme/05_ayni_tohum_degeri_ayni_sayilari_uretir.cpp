#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* srand() ayný tohum deðeriyle tekrar çaðrýlýrsa
     * sayý dizisi baþtan baþlar ve ayný sayýlar yeniden üretilir. */

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
