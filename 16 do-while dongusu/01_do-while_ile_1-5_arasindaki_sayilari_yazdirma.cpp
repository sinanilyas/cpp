#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 1;

    /* do-while döngüsünde önce döngü gövdesi çalýþtýrýlýr,
     * ardýndan koþul kontrol edilir.
     * Koþul doðru olduðu sürece döngü tekrarlanýr. */

    do
    {
        cout << sayi << endl;
        sayi++;
    } while (sayi <= 5); // Sondaki noktalý virgül zorunludur.

    return 0;
}
