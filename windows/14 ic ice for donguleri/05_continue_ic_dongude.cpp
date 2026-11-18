#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç döngüde kullanýlan continue komutu yalnýzca
     * iç döngünün o anki tekrarýnýn kalan kýsmýný atlar.
     * Dýþ döngünün çalýþmasýný etkilemez. */

    for (int i = 1; i <= 3; i++)
    {
        cout << "Dýþ döngü: " << i << endl;

        for (int j = 1; j <= 5; j++)
        {
            if (j == 3) continue;

            cout << "   Ýç döngü: " << j << endl;
        }
    }

    return 0;
}
