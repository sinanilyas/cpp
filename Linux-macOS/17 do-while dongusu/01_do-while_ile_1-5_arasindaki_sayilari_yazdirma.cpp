#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 1;

    /* do-while döngüsünde önce döngü gövdesi çalıştırılır,
     * ardından koşul kontrol edilir.
     * Koşul doğru olduğu sürece döngü tekrarlanır. */

    do
    {
        cout << sayi << endl;
        sayi++;
    } while (sayi <= 5); // Sondaki noktalı virgül zorunludur.

    return 0;
}
