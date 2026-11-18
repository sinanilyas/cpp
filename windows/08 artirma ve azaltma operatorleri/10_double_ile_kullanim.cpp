#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    double sayi = 5.7;

    // Ondalýklý sayý 1 artýrýlýr
    sayi++;

    cout << sayi << endl; // 6.7

    // Ondalýklý sayý 1 azaltýlýr
    sayi--;

    cout << sayi << endl; // 5.7

    /* ++ ve -- operatörleri yalnýzca tamsayýlarda deðil,
     * ondalýklý sayýlarda da kullanýlabilir.
     */

    return 0;
}
