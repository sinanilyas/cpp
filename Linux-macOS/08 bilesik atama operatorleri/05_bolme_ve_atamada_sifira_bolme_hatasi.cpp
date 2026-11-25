#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 15;
    int bolen = 0;

    // HATA: Tamsayının sıfıra bölünmesi tanımsız davranıştır
    sayi /= bolen;

    cout << sayi << endl;

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi / bolen;
     *
     * Tamsayılar sıfıra bölünemez.
     * Program çalışma sırasında hata vererek sonlanabilir.
     */

    return 0;
}
