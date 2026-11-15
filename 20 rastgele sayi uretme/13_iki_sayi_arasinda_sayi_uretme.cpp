#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    int enKucuk, enBuyuk;

    cout << "Aralýðýn en küçük deðerini giriniz: ";
    cin >> enKucuk;

    cout << "Aralýðýn en büyük deðerini giriniz: ";
    cin >> enBuyuk;

    /* Önceki örneklerdeki yöntem genelleþtirilebilir:
     * Aralýktaki sayý adedi: enBuyuk - enKucuk + 1
     * rand() % adet ifadesi 0 ile (adet - 1) arasýnda sayý üretir.
     * Sonuca enKucuk eklenirse istenen aralýk elde edilir.
     *
     * Genel formül: rand() % (max - min + 1) + min
     *
     * Örnekler:
     *   1-100   : rand() % (100 - 1 + 1) + 1         = rand() % 100 + 1
     *   100-105 : rand() % (105 - 100 + 1) + 100     = rand() % 6 + 100
     *   -10, 10 : rand() % (10 - (-10) + 1) + (-10)  = rand() % 21 - 10
     *
     * Parantez kullanýlmazsa önce rand() % enBuyuk hesaplanýr
     * ve yanlýþ sonuç elde edilir.
     *
     * Girilen en küçük deðer, en büyük deðerden büyük olmamalýdýr.
     *
     * rand() en fazla RAND_MAX deðerini üretebildiði için aralýktaki
     * sayý adedi RAND_MAX + 1 deðerini aþmamalýdýr. Örneðin RAND_MAX
     * 32767 ise rand() % 100000 ifadesi 32767'den büyük sayý üretemez. */

    int adet = (enBuyuk - enKucuk + 1);

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % adet + enKucuk << endl;
    }

    return 0;
}
