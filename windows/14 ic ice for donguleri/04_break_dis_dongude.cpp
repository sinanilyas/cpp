#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dýþ döngüde kullanýlan break komutu dýþ döngüyü sonlandýrýr.
     * Böylece iç döngü de artýk çalýþtýrýlmaz. */

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3) break;

        cout << "Dýþ döngü: " << i << endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "   Ýç döngü: " << j << endl;
        }
    }

    return 0;
}
