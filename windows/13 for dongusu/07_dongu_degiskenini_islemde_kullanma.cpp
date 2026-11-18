#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeni aritmetik iþlemlerde kullanýlabilir.
     * Deðiþkenin deðerini bir iþlemde kullanmak
     * o deðiþkenin deðerini deðiþtirmez. */

    for (int i = 0; i < 5; i++)
    {
        cout << i + 10 << endl;
    }

    // Ekrana sýrasýyla 10, 11, 12, 13 ve 14 yazdýrýlýr.

    return 0;
}
