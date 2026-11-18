#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngüler ters yönde çalýþtýrýlarak ters piramit oluþturulabilir.
     * Her satýrda boþluk sayýsý 1 artarken
     * yýldýz sayýsý 2 azalýr. */

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++) cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";

        cout << endl;
    }

    return 0;
}
