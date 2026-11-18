#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir for döngüsünün içerisinde baþka bir for döngüsü bulunabilir.
     * Dýþ döngünün her tekrarýnda iç döngü baþtan sona çalýþtýrýlýr. */

    for (int i = 1; i <= 3; i++)
    {
        cout << "Dýþ döngü: " << i << endl;

        for (int j = 1; j <= 2; j++)
        {
            cout << "   Ýç döngü: " << j << endl;
        }
    }

    /* Dýþ döngü 3 kez, her seferinde iç döngü 2 kez çalýþýr.
     * Böylece iç döngünün gövdesi toplam 3 × 2 = 6 kez çalýþtýrýlýr. */

    return 0;
}
