#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 1;

    /* break komutu çalýþtýrýldýðýnda döngü,
     * koþul kontrol edilmeden sonlandýrýlýr. */

    do
    {
        if (sayi == 5) break;

        cout << sayi << endl;
        sayi++;

    } while (sayi <= 10);

    cout << "Döngü sona erdi." << endl;

    return 0;
}
