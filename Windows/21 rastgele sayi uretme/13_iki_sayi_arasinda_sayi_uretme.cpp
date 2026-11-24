#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(0));

    int enKucuk, enBuyuk;

    cout << "Aralığın en küçük değerini giriniz: ";
    cin >> enKucuk;

    cout << "Aralığın en büyük değerini giriniz: ";
    cin >> enBuyuk;

    /* Önceki örneklerdeki yöntem genelleştirilebilir:
     * Aralıktaki sayı adedi: enBuyuk - enKucuk + 1
     * rand() % adet ifadesi 0 ile (adet - 1) arasında sayı üretir.
     * Sonuca enKucuk eklenirse istenen aralık elde edilir.
     *
     * Genel formül: rand() % (max - min + 1) + min
     *
     * Örnekler:
     *   1-100   : rand() % (100 - 1 + 1) + 1         = rand() % 100 + 1
     *   100-105 : rand() % (105 - 100 + 1) + 100     = rand() % 6 + 100
     *   -10, 10 : rand() % (10 - (-10) + 1) + (-10)  = rand() % 21 - 10
     *
     * Parantez kullanılmazsa önce rand() % enBuyuk hesaplanır
     * ve yanlış sonuç elde edilir.
     *
     * Girilen en küçük değer, en büyük değerden büyük olmamalıdır.
     *
     * rand() en fazla RAND_MAX değerini üretebildiği için aralıktaki
     * sayı adedi RAND_MAX + 1 değerini aşmamalıdır. Örneğin RAND_MAX
     * 32767 ise rand() % 100000 ifadesi 32767'den büyük sayı üretemez. */

    int adet = (enBuyuk - enKucuk + 1);

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % adet + enKucuk << endl;
    }

    return 0;
}
