#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün koþul bölümü boþ býrakýlabilir.
     * Bu durumda koþul her zaman doðru kabul edilir.
     * Döngü baþka bir þekilde sonlandýrýlmazsa sonsuza kadar çalýþýr. */

    for (int i = 1; ; i++)
    {
        if (i > 5) break;

        cout << i << endl;
    }

    // Ekrana sýrasýyla 1, 2, 3, 4 ve 5 yazdýrýlýr.

    return 0;
}
