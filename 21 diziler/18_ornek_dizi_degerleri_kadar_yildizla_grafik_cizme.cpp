#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int degerler[] = {3, 7, 2, 5, 4};
    int elemanSayisi = sizeof(degerler) / sizeof(degerler[0]);

    /* Dýþ döngü dizinin elemanlarýný sýrayla dolaþýr ve her eleman
     * için bir satýr oluþturur. Ýç döngü, sýradaki elemanýn deðeri
     * kadar yan yana yýldýz yazar. Ýç döngünün kaç kez döneceðini
     * dizi elemanýnýn deðeri belirler. */
    for (int i = 0; i < elemanSayisi; i++)
    {
        cout << degerler[i] << ": ";

        for (int j = 1; j <= degerler[i]; j++)
        {
            cout << "*";
        }

        // Ýç döngü tamamlandýðýnda alt satýra geçilir.
        cout << endl;
    }

    /* Ekran çýktýsý:
     * 3: ***
     * 7: *******
     * 2: **
     * 5: *****
     * 4: ****
     */

    return 0;
}
