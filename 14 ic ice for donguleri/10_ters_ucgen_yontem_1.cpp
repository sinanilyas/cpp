#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç döngünün baþlangýç deðeri dýþ döngünün deðiþkenine
     * baðlý olarak deðiþtirilebilir.
     * Böylece her satýrda yazdýrýlan karakter sayýsý azaltýlabilir. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
