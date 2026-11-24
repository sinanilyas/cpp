#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
