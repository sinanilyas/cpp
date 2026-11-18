#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    /* rand() fonksiyonu 0 ile RAND_MAX arasında (ikisi de dahil)
     * bir tamsayı üretir. RAND_MAX, <cstdlib> içinde tanımlı bir sabittir
     * ve rand() ile üretilebilecek en büyük sayıyı verir. */

    cout << RAND_MAX << endl; // Windows'ta 32767, Linux ve macOS'ta 2147483647

    /* RAND_MAX değeri derleyiciye ve işletim sistemine göre değişebilir.
     * C++ standardı en az 32767 olmasını garanti eder. */

    return 0;
}
