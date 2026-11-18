#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 10;

    // sayi değişkeninin değeri 1 artırılır
    sayi++;

    cout << sayi << endl; // 11

    /* Yukarıdaki işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * sayi = sayi + 1;
     * sayi += 1;
     *
     * ++ operatörü, değişkenin değerini 1 artırır.
     */

    return 0;
}
