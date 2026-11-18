#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // Aynı değişken cout ifadesinde iki kez artırılıyor
    cout << sayi++ << sayi++ << endl;

    /* Bu kullanım C++17 öncesi sürümlerde tanımsız
     * davranışa yol açar. Bu nedenle bu tür
     * ifadelerden kaçınılması tavsiye edilir.
     */

    return 0;
}
