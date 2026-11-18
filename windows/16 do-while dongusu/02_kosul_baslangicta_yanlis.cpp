#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    /* do-while döngüsünde koþul en son kontrol edilir.
     * Bu nedenle koþul baþlangýçta yanlýþ olsa bile
     * döngü gövdesi en az bir kez çalýþtýrýlýr. */

    do
    {
        cout << sayi << endl;
        sayi++;
    } while (sayi <= 5);

    return 0;
}
