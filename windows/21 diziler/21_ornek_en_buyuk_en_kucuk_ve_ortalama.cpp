#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[] = {34, 12, 78, 5, 61, 23};
    int elemanSayisi = sizeof(sayilar) / sizeof(sayilar[0]);

    /* En büyük ve en küçük deðiþkenlerine baþlangýçta dizinin ilk
     * elemaný verilir. Sonra bütün elemanlar bunlarla karþýlaþtýrýlýr.
     * Baþlangýç deðeri olarak 0 verilseydi, bütün elemanlarý negatif
     * olan bir dizide en büyük deðer yanlýþ bulunurdu. */
    int enBuyuk = sayilar[0];
    int enKucuk = sayilar[0];
    int toplam = sayilar[0];

    for (int i = 1; i < elemanSayisi; i++)
    {
        if (sayilar[i] > enBuyuk)
            enBuyuk = sayilar[i];

        if (sayilar[i] < enKucuk)
            enKucuk = sayilar[i];

        toplam += sayilar[i];
    }

    // Tamsayý bölmesini önlemek için toplam double tipine dönüþtürülür
    double ortalama = static_cast<double>(toplam) / elemanSayisi;

    cout << "En büyük: " << enBuyuk << endl;  // 78
    cout << "En küçük: " << enKucuk << endl;  // 5
    cout << "Toplam: " << toplam << endl;     // 213
    cout << "Ortalama: " << ortalama << endl; // 35.5

    return 0;
}
