#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü gövdesinde birden fazla komut çalýþtýrýlacaksa
     * komutlar süslü parantez içine alýnmalýdýr.
     * Süslü parantez içindeki tüm komutlar
     * her tekrarda sýrasýyla çalýþtýrýlýr. */

    for (int i = 0; i < 5; i++)
    {
        cout << "Merhaba." << endl;
        cout << "Ben C++ öðreniyorum." << endl;
    }

    return 0;
}
