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
    setlocale(LC_ALL, "Turkish");

    /* Dizinin elemanlarý yapý türünde olabilir. Aþaðýdaki dizinin
     * her elemaný bir ogrenci yapýsýdýr ve numara, vize ve final
     * üyelerine sahiptir. Böylece her öðrencinin bilgileri bir arada
     * tutulur. Numaralar, vize notlarý ve final notlarý için üç ayrý
     * dizi tanýmlamaya gerek kalmaz.
     *
     * Her elemanýn baþlangýç deðerleri ayrý küme parantezleri
     * içinde yazýlýr. */
    ogrenci ogrenciler[3] = {{101, 60, 70}, {102, 45, 80}, {103, 90, 85}};

    /* Bir elemanýn üyesine eriþmek için önce indis, sonra nokta (.)
     * operatörü ve üye adý yazýlýr. */
    cout << ogrenciler[1].numara << endl; // 102
    cout << ogrenciler[1].vize << endl;   // 45

    // Üyelerin deðerleri deðiþtirilebilir.
    ogrenciler[1].vize = 50;

    // sizeof yapý dizilerinde de eleman sayýsýný bulmak için kullanýlabilir.
    int ogrenciSayisi = sizeof(ogrenciler) / sizeof(ogrenciler[0]);

    for (int i = 0; i < ogrenciSayisi; i++)
    {
        double ortalama = ogrenciler[i].vize * 0.4 + ogrenciler[i].final * 0.6;

        cout << ogrenciler[i].numara << " numaralý öðrencinin ortalamasý: " << ortalama << endl;
    }

    /* Ekran çýktýsý:
     * 101 numaralý öðrencinin ortalamasý: 66
     * 102 numaralý öðrencinin ortalamasý: 68
     * 103 numaralý öðrencinin ortalamasý: 87
     */

    return 0;
}
