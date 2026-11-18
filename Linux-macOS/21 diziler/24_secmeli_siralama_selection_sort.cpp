#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayilar[] = {72, 98, 29, 87, 66, 13};
    int elemanSayisi = sizeof(sayilar) / sizeof(sayilar[0]);

    cout << "Başlangıç: ";
    for (int k = 0; k < elemanSayisi; k++)
    {
        cout << sayilar[k] << " ";
    }
    cout << endl;

    /* Seçmeli sıralama (selection sort):
     * Her turda dizinin henüz sıralanmamış kısmındaki en küçük eleman
     * bulunur ve bu kısmın ilk elemanıyla yer değiştirilir.
     * 1. turda en küçük eleman 0 indisli konuma, 2. turda kalanların
     * en küçüğü 1 indisli konuma yerleştirilir ve bu böyle devam eder.
     * Son eleman kendiliğinden yerine oturduğu için n elemanlı dizi
     * n - 1 turda sıralanır. */
    for (int i = 0; i < elemanSayisi - 1; i++)
    {
        // i indisinden başlayan kısımdaki en küçük elemanın indisi bulunur
        int enKucukIndis = i;

        for (int j = i + 1; j < elemanSayisi; j++)
        {
            if (sayilar[j] < sayilar[enKucukIndis])
                enKucukIndis = j;
        }

        // En küçük eleman ile i indisli elemanın yeri değiştirilir
        int gecici = sayilar[i];
        sayilar[i] = sayilar[enKucukIndis];
        sayilar[enKucukIndis] = gecici;

        // Her turdan sonra dizinin durumu yazdırılır
        cout << i + 1 << ". tur: ";
        for (int k = 0; k < elemanSayisi; k++)
        {
            cout << sayilar[k] << " ";
        }
        cout << endl;
    }

    /* Ekran çıktısı:
     * Başlangıç: 72 98 29 87 66 13
     * 1. tur: 13 98 29 87 66 72
     * 2. tur: 13 29 98 87 66 72
     * 3. tur: 13 29 66 87 98 72
     * 4. tur: 13 29 66 72 98 87
     * 5. tur: 13 29 66 72 87 98
     *
     * Dizinin sıralanmış kısmı baştan itibaren her turda bir eleman büyür.
     *
     * Büyükten küçüğe sıralamak için her turda en küçük yerine
     * en büyük eleman aranır: if (sayilar[j] > sayilar[enBuyukIndis]) */

    return 0;
}
