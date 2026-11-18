#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 17;
    int bolen = 0;

    // HATA: Sıfıra bölümden kalan hesaplanamaz
    sayi %= bolen;

    cout << sayi << endl;

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi % bolen;
     *
     * Sıfıra bölümden kalan hesaplanamaz.
     * Program çalışma sırasında hata vererek sonlanabilir.
     */

    return 0;
}
