#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 10;

    // Aynı değişken cout ifadesinde iki kez artırılıyor
    cout << sayi++ << sayi++ << endl;

    /* Bu kullanım C++17 öncesi sürümlerde tanımsız
     * davranışa yol açar. Bu nedenle bu tür
     * ifadelerden kaçınılması tavsiye edilir.
     */

    return 0;
}
