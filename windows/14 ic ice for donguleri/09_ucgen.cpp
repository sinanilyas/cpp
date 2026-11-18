#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç döngünün tekrar sayýsý dýþ döngünün deðiþkenine
     * baðlý olarak deðiþtirilebilir.
     * Böylece her satýrda farklý sayýda karakter yazdýrýlabilir. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
