#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü gövdesinde birden fazla komut çalıştırılacaksa
     * komutlar süslü parantez içine alınmalıdır.
     * Süslü parantez içindeki tüm komutlar
     * her tekrarda sırasıyla çalıştırılır. */

    for (int i = 0; i < 5; i++)
    {
        cout << "Merhaba." << endl;
        cout << "Ben C++ öğreniyorum." << endl;
    }

    return 0;
}
