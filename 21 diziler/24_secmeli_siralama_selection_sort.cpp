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

    /* Seçmeli sýralama (selection sort):
     * Her turda dizinin henüz sýralanmamýþ kýsmýndaki en küçük eleman
     * bulunur ve bu kýsmýn ilk elemanýyla yer deðiþtirilir.
     * 1. turda en küçük eleman 0 indisli konuma, 2. turda kalanlarýn
     * en küçüðü 1 indisli konuma yerleþtirilir ve bu böyle devam eder.
     * Son eleman kendiliðinden yerine oturduðu için n elemanlý dizi
     * n - 1 turda sýralanýr. */
    for (int i = 0; i < elemanSayisi - 1; i++)
    {
        // i indisinden baþlayan kýsýmdaki en küçük elemanýn indisi bulunur
        int enKucukIndis = i;

        for (int j = i + 1; j < elemanSayisi; j++)
        {
            if (sayilar[j] < sayilar[enKucukIndis])
                enKucukIndis = j;
        }

        // En küçük eleman ile i indisli elemanýn yeri deðiþtirilir
        int gecici = sayilar[i];
        sayilar[i] = sayilar[enKucukIndis];
        sayilar[enKucukIndis] = gecici;

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
     * 1. tur: 13 98 29 87 66 72
     * 2. tur: 13 29 98 87 66 72
     * 3. tur: 13 29 66 87 98 72
     * 4. tur: 13 29 66 72 98 87
     * 5. tur: 13 29 66 72 87 98
     *
     * Dizinin sýralanmýþ kýsmý baþtan itibaren her turda bir eleman büyür.
     *
     * Büyükten küçüðe sýralamak için her turda en küçük yerine
     * en büyük eleman aranýr: if (sayilar[j] > sayilar[enBuyukIndis]) */

    return 0;
}
