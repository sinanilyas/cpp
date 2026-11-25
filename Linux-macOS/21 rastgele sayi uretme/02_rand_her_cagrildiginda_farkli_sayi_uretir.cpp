#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    /* rand() fonksiyonu her çağrıldığında
     * bir sonraki rastgele sayıyı üretir. */

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Windows'ta genellikle sırasıyla 41, 18467, 6334, 26500 ve 19169
     * yazdırılır. Diğer sistemlerde sayılar farklıdır, ama program tekrar
     * çalıştırıldığında yine aynı sayılar aynı sırayla üretilir. */

    return 0;
}
