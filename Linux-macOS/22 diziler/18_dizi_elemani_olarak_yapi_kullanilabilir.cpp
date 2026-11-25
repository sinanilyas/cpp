#include <iostream>
using namespace std;

struct ogrenci
{
    int numara;
    int vize;
    int final;
};

int main(int argc, char** argv)
{
    /* Dizinin elemanları yapı türünde olabilir. Aşağıdaki dizinin
     * her elemanı bir ogrenci yapısıdır ve numara, vize ve final
     * üyelerine sahiptir. Böylece her öğrencinin bilgileri bir arada
     * tutulur. Numaralar, vize notları ve final notları için üç ayrı
     * dizi tanımlamaya gerek kalmaz.
     *
     * Her elemanın başlangıç değerleri ayrı küme parantezleri
     * içinde yazılır. */
    ogrenci ogrenciler[3] = {{101, 60, 70}, {102, 45, 80}, {103, 90, 85}};

    /* Bir elemanın üyesine erişmek için önce indis, sonra nokta (.)
     * operatörü ve üye adı yazılır. */
    cout << ogrenciler[1].numara << endl; // 102
    cout << ogrenciler[1].vize << endl;   // 45

    // Üyelerin değerleri değiştirilebilir.
    ogrenciler[1].vize = 50;

    // sizeof yapı dizilerinde de eleman sayısını bulmak için kullanılabilir.
    int ogrenciSayisi = sizeof(ogrenciler) / sizeof(ogrenciler[0]);

    for (int i = 0; i < ogrenciSayisi; i++)
    {
        double ortalama = ogrenciler[i].vize * 0.4 + ogrenciler[i].final * 0.6;

        cout << ogrenciler[i].numara << " numaralı öğrencinin ortalaması: " << ortalama << endl;
    }

    /* Ekran çıktısı:
     * 101 numaralı öğrencinin ortalaması: 66
     * 102 numaralı öğrencinin ortalaması: 68
     * 103 numaralı öğrencinin ortalaması: 87
     */

    return 0;
}
