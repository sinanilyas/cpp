#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeninin deðeri her tekrarda deðiþir.
     * Bu deðiþken döngü gövdesinde kullanýlabilir. */

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // Ekrana sýrasýyla 0, 1, 2, 3 ve 4 yazdýrýlýr.

    return 0;
}
