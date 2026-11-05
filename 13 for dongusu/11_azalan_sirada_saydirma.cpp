#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeninin deðeri her tekrarda azaltýlabilir.
     * Bunun için artýþ bölümünde i-- kullanýlabilir.
     * Böylece döngü geriye doðru saydýrýlabilir. */

    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    // Ekrana sýrasýyla 10, 9, 8, ... , 2 ve 1 yazdýrýlýr.

    return 0;
}
