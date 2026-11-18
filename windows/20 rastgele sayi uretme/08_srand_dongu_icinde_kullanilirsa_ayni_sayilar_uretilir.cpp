#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* srand() döngü içinde çaðrýlýrsa her tekrarda tohum deðeri
     * yeniden verilir ve sayý dizisi baþtan baþlar.
     * Döngü bir saniyeden kýsa sürede tamamlandýðý için time(0)
     * her tekrarda ayný deðeri verir. Bu yüzden hep ayný sayý üretilir. */

    for (int i = 1; i <= 5; i++)
    {
        srand(time(0)); // MANTIK HATASI: srand() döngü içinde çaðrýlmamalýdýr
        cout << rand() << endl;
    }

    // Ekrana 5 kez ayný sayý yazdýrýlýr.

    /* srand() programýn baþýnda yalnýzca bir kez çaðrýlmalýdýr. */

    return 0;
}
