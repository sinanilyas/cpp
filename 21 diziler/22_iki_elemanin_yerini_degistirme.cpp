#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[] = {10, 20, 30, 40, 50};

    /* 1 ve 3 indisli elemanlarýn yerleri deðiþtiriliyor.
     * Deðerlerden biri kaybolmasýn diye geçici bir deðiþken kullanýlýr. */
    int gecici = sayilar[1];
    sayilar[1] = sayilar[3];
    sayilar[3] = gecici;

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 40 30 20 50 yazdýrýlýr.

    /* Geçici deðiþken kullanýlmadan
     *
     *     sayilar[1] = sayilar[3];
     *     sayilar[3] = sayilar[1];
     *
     * yazýlýrsa ilk atamada sayilar[1]'in eski deðeri (20) kaybolur
     * ve iki eleman da 40 olur. Ýki bardaktaki suyun yerini
     * deðiþtirmek için üçüncü bir bardak gerekmesine benzer.
     *
     * Sýralama algoritmalarý elemanlarýn yerini bu yöntemle deðiþtirir. */

    return 0;
}
