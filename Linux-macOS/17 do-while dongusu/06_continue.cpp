#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 0;

    /* continue komutu çalıştırıldığında döngü gövdesindeki
     * kalan komutlar atlanır ve koşul kontrol edilir.
     * Koşul doğruysa döngü tekrar çalıştırılır. */

    do
    {
        sayi++;

        if (sayi == 5) continue;

        cout << sayi << endl;

    } while (sayi < 10);

    return 0;
}
