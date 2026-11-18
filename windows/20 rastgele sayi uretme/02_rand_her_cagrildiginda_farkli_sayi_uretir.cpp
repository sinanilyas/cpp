#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* rand() fonksiyonu her çağrıldığında
     * bir sonraki rastgele sayıyı üretir. */

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Genellikle sırasıyla 41, 18467, 6334, 26500 ve 19169 yazdırılır.
     * Program tekrar çalıştırıldığında da aynı sayılar
     * aynı sırayla üretilir. */

    return 0;
}
