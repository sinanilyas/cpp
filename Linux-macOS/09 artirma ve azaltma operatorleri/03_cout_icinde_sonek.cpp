#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 10;

    // Önce mevcut değer yazdırılır, sonra 1 artırılır
    cout << sayi++ << endl; // 10

    cout << sayi << endl;   // 11

    /* sayi++ ifadesinde önce değişkenin mevcut değeri
     * kullanılır, ardından değişkenin değeri 1 artırılır.
     *
     * Yukarıdaki işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * cout << sayi << endl;
     * sayi++;
     */

    return 0;
}
