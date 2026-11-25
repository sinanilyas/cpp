#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 17;

    // sayi değişkeninin 5'e bölümünden kalan hesaplanır
    sayi %= 5;

    cout << sayi << endl; // 2

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi % 5;
     *
     * %= operatörü, mod alma ve atama işlemlerini
     * tek bir işlemde birleştirir.
     *
     * % operatörü yalnızca tamsayı tipleriyle kullanılabilir.
     */

    return 0;
}
