#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    /* İki matrisin toplanabilmesi için satır ve sütun sayıları aynı
     * olmalıdır. Toplam matrisin her elemanı, iki matrisin aynı
     * konumdaki (aynı indisli) elemanlarının toplamıdır:
     *
     *     toplam[i][j] = matris1[i][j] + matris2[i][j] */
    const int SATIR = 3;
    const int SUTUN = 2;

    int matris1[SATIR][SUTUN] = {{1, 2}, {3, 4}, {5, 6}};
    int matris2[SATIR][SUTUN] = {{10, 20}, {30, 40}, {50, 60}};
    int toplam[SATIR][SUTUN];

    for (int i = 0; i < SATIR; i++)
    {
        for (int j = 0; j < SUTUN; j++)
        {
            toplam[i][j] = matris1[i][j] + matris2[i][j];
        }
    }

    cout << "Toplam matris:" << endl;

    // Her eleman setw ile 4 karakterlik alana yazılır, sütunlar hizalanır.
    for (int i = 0; i < SATIR; i++)
    {
        for (int j = 0; j < SUTUN; j++)
        {
            cout << setw(4) << toplam[i][j];
        }

        cout << endl;
    }

    /* Ekran çıktısı:
     * Toplam matris:
     *   11  22
     *   33  44
     *   55  66
     */

    /* Matrisler topluca toplanamaz. toplam = matris1 + matris2;
     * yazılırsa program derlenmez. Elemanlar döngüyle tek tek
     * toplanmalıdır. */

    return 0;
}
