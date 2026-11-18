#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Baþlangýç deðerleri verilirse ilk boyutun eleman sayýsý
     * (satýr sayýsý) yazýlmayabilir. Derleyici, verilen deðerlere
     * bakarak satýr sayýsýný kendisi belirler. */
    int matris[][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}}; // 4 satýrlý matris

    cout << sizeof(matris) << endl; // Genellikle 32: 4 * 2 * 4 bayt

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çýktýsý (sizeof satýrýndan sonra):
     * 1 2
     * 3 4
     * 5 6
     * 7 8
     */

    /* Yalnýzca ilk boyutun eleman sayýsý yazýlmayabilir. Diðer
     * boyutlarýn eleman sayýlarý yazýlmak zorundadýr, çünkü derleyici
     * bir satýrda kaç eleman olduðunu bilmelidir.
     *
     *     int matris[][] = {{1, 2}, {3, 4}};
     *     int matris[2][] = {{1, 2}, {3, 4}};
     *
     * Bu iki tanýmlamada da program derlenmez. */

    return 0;
}
