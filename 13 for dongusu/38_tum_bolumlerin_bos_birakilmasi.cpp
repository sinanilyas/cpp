#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün üç bölümü de boþ býrakýlabilir.
     * for (;;) ifadesi sonsuz döngü oluþturur.
     * Böyle bir döngü break komutuyla sonlandýrýlabilir. */

    int i = 1;

    for (;;)
    {
        cout << i << endl;

        if (i == 5) break;

        i++;
    }

    // Ekrana sýrasýyla 1, 2, 3, 4 ve 5 yazdýrýlýr.

    return 0;
}
