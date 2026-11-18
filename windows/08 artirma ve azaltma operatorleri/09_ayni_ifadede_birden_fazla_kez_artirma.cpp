#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // Ayný deðiþken cout ifadesinde iki kez artýrýlýyor
    cout << sayi++ << sayi++ << endl;

    /* Bu kullaným C++17 öncesi sürümlerde tanýmsýz
     * davranýþa yol açar. Bu nedenle bu tür
     * ifadelerden kaçýnýlmasý tavsiye edilir.
     */

    return 0;
}
