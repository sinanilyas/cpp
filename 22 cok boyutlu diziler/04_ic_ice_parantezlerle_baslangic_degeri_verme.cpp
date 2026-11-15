#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Çok boyutlu dizilere tanýmlama sýrasýnda baþlangýç deðeri
     * verilebilir. Her satýrýn deðerleri ayrý bir küme parantezi
     * içine yazýlýr. Satýrlarýn küme parantezleri de virgülle
     * ayrýlarak dýþtaki küme parantezinin içine yazýlýr.
     * {1, 2} 0. satýrýn, {3, 4} 1. satýrýn, {5, 6} 2. satýrýn
     * deðerleridir. */
    int matris[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << matris[1][0] << endl; // 3
    cout << matris[2][1] << endl; // 6

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çýktýsý:
     * 1 2
     * 3 4
     * 5 6
     */

    /* Satýrlar alt alta yazýlýrsa matrisin görünümü daha kolay
     * anlaþýlýr:
     *
     *     int matris[3][2] =
     *     {
     *         {1, 2},
     *         {3, 4},
     *         {5, 6}
     *     };
     */

    return 0;
}
