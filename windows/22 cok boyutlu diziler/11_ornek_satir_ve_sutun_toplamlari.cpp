#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int SATIR = 3;
    const int SUTUN = 4;

    int matris[SATIR][SUTUN] = {{5, 3, 8, 1}, {2, 7, 4, 6}, {9, 0, 3, 5}};

    /* Satýr toplamlarý: dýþ döngü satýrlarý, iç döngü sütunlarý dolaþýr.
     * Her satýrýn elemanlarý yazýlýr, toplamý satýrýn sonuna eklenir.
     * satirToplami dýþ döngünün içinde tanýmlandýðý için her satýrda
     * 0'dan baþlar. */
    for (int i = 0; i < SATIR; i++)
    {
        int satirToplami = 0;

        for (int j = 0; j < SUTUN; j++)
        {
            cout << setw(4) << matris[i][j];
            satirToplami += matris[i][j];
        }

        cout << " | " << satirToplami << endl;
    }

    cout << "-----------------" << endl;

    /* Sütun toplamlarý: döngülerin yeri deðiþtirilir. Dýþ döngü
     * sütunlarý, iç döngü satýrlarý dolaþýr. Ýndislerin sýrasý
     * deðiþmez: ilk indis yine satýr (i), ikinci indis sütundur (j). */
    for (int j = 0; j < SUTUN; j++)
    {
        int sutunToplami = 0;

        for (int i = 0; i < SATIR; i++)
        {
            sutunToplami += matris[i][j];
        }

        cout << setw(4) << sutunToplami;
    }
    cout << endl;

    /* Ekran çýktýsý:
     *    5   3   8   1 | 17
     *    2   7   4   6 | 19
     *    9   0   3   5 | 17
     * -----------------
     *   16  10  15  12
     */

    return 0;
}
