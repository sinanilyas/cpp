#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç içe döngülerde break komutu yalnýzca
     * bulunduðu döngüyü sonlandýrýr.
     * Dýþ döngü çalýþmaya devam eder. */

    for (int i = 1; i <= 3; i++)
    {
        cout << "Dýþ döngü: " << i << endl;

        for (int j = 1; j <= 5; j++)
        {
            if (j == 3) break;

            cout << "   Ýç döngü: " << j << endl;
        }
    }

    return 0;
}
