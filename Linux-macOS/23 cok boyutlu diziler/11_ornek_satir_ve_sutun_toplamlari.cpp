#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    const int SATIR = 3;
    const int SUTUN = 4;

    int matris[SATIR][SUTUN] = {{5, 3, 8, 1}, {2, 7, 4, 6}, {9, 0, 3, 5}};

    /* Satır toplamları: dış döngü satırları, iç döngü sütunları dolaşır.
     * Her satırın elemanları yazılır, toplamı satırın sonuna eklenir.
     * satirToplami dış döngünün içinde tanımlandığı için her satırda
     * 0'dan başlar. */
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

    /* Sütun toplamları: döngülerin yeri değiştirilir. Dış döngü
     * sütunları, iç döngü satırları dolaşır. İndislerin sırası
     * değişmez: ilk indis yine satır (i), ikinci indis sütundur (j). */
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

    /* Ekran çıktısı:
     *    5   3   8   1 | 17
     *    2   7   4   6 | 19
     *    9   0   3   5 | 17
     * -----------------
     *   16  10  15  12
     */

    return 0;
}
