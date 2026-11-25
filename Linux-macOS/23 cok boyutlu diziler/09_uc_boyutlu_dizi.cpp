#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Dizilerin ikiden fazla boyutu olabilir. Üç boyutlu bir dizi,
     * elemanları matris olan bir dizi gibi düşünülebilir.
     *
     * Bu örnekte 2 katlı, her katında 3 sıra ve her sırasında
     * 4 koltuk bulunan bir sinema salonundaki koltukların durumu
     * tutulur. 1 dolu, 0 boş koltuğu gösterir.
     *
     * İndislerin anlamı: koltuklar[kat][sira][koltuk]
     * koltuklar[0], 1. katın 3 satır 4 sütunlu matrisidir. */
    int koltuklar[2][3][4] =
    {
        {{1, 1, 0, 1}, {0, 1, 1, 0}, {0, 0, 0, 1}}, // 1. kat
        {{1, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 1, 0}}  // 2. kat
    };

    cout << sizeof(koltuklar) << endl; // Genellikle 96: 2 * 3 * 4 * 4 bayt

    // 2. katın 2. sırasındaki 4. koltuk
    cout << koltuklar[1][1][3] << endl; // 1

    // Üç boyutlu dizinin bütün elemanları iç içe üç döngüyle dolaşılır.
    int doluSayisi = 0;

    for (int kat = 0; kat < 2; kat++)
    {
        cout << kat + 1 << ". Kat" << endl;

        for (int sira = 0; sira < 3; sira++)
        {
            cout << sira + 1 << ". Sıra: ";

            for (int koltuk = 0; koltuk < 4; koltuk++)
            {
                cout << koltuklar[kat][sira][koltuk] << " ";
                doluSayisi += koltuklar[kat][sira][koltuk];
            }

            cout << endl;
        }
    }

    cout << "Dolu koltuk sayısı: " << doluSayisi << endl; // 12

    return 0;
}
