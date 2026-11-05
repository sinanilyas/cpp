#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir dýþ döngünün içerisinde birden fazla iç döngü bulunabilir.
     * Ýlk iç döngü boþluklarý, ikinci iç döngü yýldýzlarý yazdýrýr.
     * Her satýrda boþluk sayýsý azalýrken yýldýz sayýsý artar. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++) cout << "  ";

        for (int j = 1; j <= i; j++) cout << "* ";

        cout << endl;
    }

    return 0;
}
