#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* rand() fonksiyonu her çaðrýldýðýnda
     * bir sonraki rastgele sayýyý üretir. */

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Genellikle sýrasýyla 41, 18467, 6334, 26500 ve 19169 yazdýrýlýr.
     * Program tekrar çalýþtýrýldýðýnda da ayný sayýlar
     * ayný sýrayla üretilir. */

    return 0;
}
