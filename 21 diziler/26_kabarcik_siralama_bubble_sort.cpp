#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[] = {72, 98, 29, 87, 66, 13};
    int elemanSayisi = sizeof(sayilar) / sizeof(sayilar[0]);

    cout << "Baþlangýç: ";
    for (int k = 0; k < elemanSayisi; k++)
    {
        cout << sayilar[k] << " ";
    }
    cout << endl;

    /* Kabarcýk sýralamasý (bubble sort):
     * Yan yana duran iki eleman karþýlaþtýrýlýr. Soldaki saðdakinden
     * büyükse yerleri deðiþtirilir. Bu iþlem dizinin baþýndan sonuna
     * kadar tekrarlanýr.
     * Her turun sonunda kalanlarýn en büyüðü sona yerleþir. Büyük
     * deðerler, sudaki kabarcýklar gibi dizinin sonuna doðru yükselir.
     * n elemanlý dizi en fazla n - 1 turda sýralanýr. */
    for (int i = 0; i < elemanSayisi - 1; i++)
    {
        /* Her turda sondaki i eleman zaten yerine yerleþmiþtir. Bu yüzden
         * her turda bir önceki turdan bir eksik karþýlaþtýrma yapýlýr.
         * j + 1 indisi kullanýldýðý için j en fazla elemanSayisi - 2
         * olabilir, aksi halde dizi sýnýrlarý aþýlýr. */
        for (int j = 0; j < elemanSayisi - 1 - i; j++)
        {
            if (sayilar[j] > sayilar[j + 1])
            {
                int gecici = sayilar[j];
                sayilar[j] = sayilar[j + 1];
                sayilar[j + 1] = gecici;
            }
        }

        // Her turdan sonra dizinin durumu yazdýrýlýr
        cout << i + 1 << ". tur: ";
        for (int k = 0; k < elemanSayisi; k++)
        {
            cout << sayilar[k] << " ";
        }
        cout << endl;
    }

    /* Ekran çýktýsý:
     * Baþlangýç: 72 98 29 87 66 13
     * 1. tur: 72 29 87 66 13 98
     * 2. tur: 29 72 66 13 87 98
     * 3. tur: 29 66 13 72 87 98
     * 4. tur: 29 13 66 72 87 98
     * 5. tur: 13 29 66 72 87 98
     *
     * Dizinin sýralanmýþ kýsmý sondan itibaren her turda bir eleman büyür.
     * Seçmeli sýralamada ise sýralanmýþ kýsým baþtan itibaren büyür.
     *
     * Büyükten küçüðe sýralamak için karþýlaþtýrma iþleci
     * deðiþtirilir: if (sayilar[j] < sayilar[j + 1]) */

    return 0;
}
