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

    /* Kabarcık sıralaması (bubble sort):
     * Yan yana duran iki eleman karşılaştırılır. Soldaki sağdakinden
     * büyükse yerleri değiştirilir. Bu işlem dizinin başından sonuna
     * kadar tekrarlanır.
     * Her turun sonunda kalanların en büyüğü sona yerleşir. Büyük
     * değerler, sudaki kabarcıklar gibi dizinin sonuna doğru yükselir.
     * n elemanlı dizi en fazla n - 1 turda sıralanır. */
    for (int i = 0; i < elemanSayisi - 1; i++)
    {
        /* Her turda sondaki i eleman zaten yerine yerleşmiştir. Bu yüzden
         * her turda bir önceki turdan bir eksik karşılaştırma yapılır.
         * j + 1 indisi kullanıldığı için j en fazla elemanSayisi - 2
         * olabilir, aksi halde dizi sınırları aşılır. */
        for (int j = 0; j < elemanSayisi - 1 - i; j++)
        {
            if (sayilar[j] > sayilar[j + 1])
            {
                int gecici = sayilar[j];
                sayilar[j] = sayilar[j + 1];
                sayilar[j + 1] = gecici;
            }
        }

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
     * 1. tur: 72 29 87 66 13 98
     * 2. tur: 29 72 66 13 87 98
     * 3. tur: 29 66 13 72 87 98
     * 4. tur: 29 13 66 72 87 98
     * 5. tur: 13 29 66 72 87 98
     *
     * Dizinin sıralanmış kısmı sondan itibaren her turda bir eleman büyür.
     * Seçmeli sıralamada ise sıralanmış kısım baştan itibaren büyür.
     *
     * Büyükten küçüğe sıralamak için karşılaştırma işleci
     * değiştirilir: if (sayilar[j] < sayilar[j + 1]) */

    return 0;
}
