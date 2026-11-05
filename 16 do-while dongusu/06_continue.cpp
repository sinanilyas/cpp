#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 0;

    /* continue komutu çalýþtýrýldýðýnda döngü gövdesindeki
     * kalan komutlar atlanýr ve koþul kontrol edilir.
     * Koþul doðruysa döngü tekrar çalýþtýrýlýr. */

    do
    {
        sayi++;

        if (sayi == 5) continue;

        cout << sayi << endl;

    } while (sayi < 10);

    return 0;
}
