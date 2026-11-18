#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeni her tekrarda 1 yerine
     * farklý miktarlarda artýrýlabilir.
     * i += 2 ifadesi, i deðerini 2 artýrýr. */

    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    // Ekrana sýrasýyla 0, 2, 4, 6, 8 ve 10 yazdýrýlýr.

    return 0;
}
