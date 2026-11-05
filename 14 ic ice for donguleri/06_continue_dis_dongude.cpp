#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dýþ döngüde kullanýlan continue komutu, dýþ döngünün
     * o anki tekrarýnýn kalan kýsmýný atlar.
     * Bu nedenle o tekrarda iç döngü de çalýþtýrýlmaz.
     * Dýþ döngü bir sonraki tekrardan devam eder. */

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3) continue;

        cout << "Dýþ döngü: " << i << endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "   Ýç döngü: " << j << endl;
        }
    }

    return 0;
}
