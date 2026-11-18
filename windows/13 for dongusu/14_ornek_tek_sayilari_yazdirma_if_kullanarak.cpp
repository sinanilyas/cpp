#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü içerisinde if kullanýlarak yalnýzca
     * belirli koþullarý saðlayan deðerler iþlenebilir.
     * Bir sayýnýn 2'ye bölümünden kalan 1 ise sayý tektir. */

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }

    // Ekrana sýrasýyla 1, 3, 5, 7 ve 9 yazdýrýlýr.

    return 0;
}
