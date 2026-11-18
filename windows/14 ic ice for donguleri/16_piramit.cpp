#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç içe döngüler kullanýlarak piramit oluþturulabilir.
     * Ýlk iç döngü boþluklarý, ikinci iç döngü yýldýzlarý yazdýrýr.
     * Her satýrda boþluk sayýsý 1 azalýrken
     * yýldýz sayýsý 2 artar. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++) cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";

        cout << endl;
    }

    return 0;
}
