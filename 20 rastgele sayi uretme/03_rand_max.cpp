#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* rand() fonksiyonu 0 ile RAND_MAX arasýnda (ikisi de dahil)
     * bir tamsayý üretir. RAND_MAX, <cstdlib> içinde tanýmlý bir sabittir
     * ve rand() ile üretilebilecek en büyük sayýyý verir. */

    cout << RAND_MAX << endl; // Genellikle 32767 veya 2147483647

    /* RAND_MAX deðeri derleyiciye ve iþletim sistemine göre deðiþebilir.
     * C++ standardý en az 32767 olmasýný garanti eder. */

    return 0;
}
