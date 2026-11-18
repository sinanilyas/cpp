#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* -10 ile 10 arasında, 0 da dahil 21 farklı sayı vardır.
     * rand() % 21 ifadesi 0-20 arasında bir sayı üretir.
     * Sonuçtan 10 çıkarılırsa -10 ile 10 arasında bir sayı elde edilir. */

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % 21 - 10 << endl;
    }

    return 0;
}
