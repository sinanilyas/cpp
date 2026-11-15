#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* Her zar sonucunun kaç kez geldiði bir dizide sayýlýr.
     * sayaclar[0] 1'lerin, sayaclar[1] 2'lerin, ..., sayaclar[5]
     * 6'larýn sayýsýný tutar. Bütün sayaçlar baþlangýçta 0'dýr. */
    int sayaclar[6] = {};

    for (int i = 1; i <= 6000; i++)
    {
        int zar = rand() % 6 + 1;

        // Zar deðerinden 1 çýkarýlarak indis bulunur ve o sayaç artýrýlýr
        sayaclar[zar - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " gelme sayýsý: " << sayaclar[i] << endl;
    }

    // Örneðin 1 gelme sayýsý: 1012

    /* Altý ayrý sayaç deðiþkeni ve switch kullanmak yerine tek bir
     * dizi ve sayaclar[zar - 1]++ satýrý yeterli olur.
     * Zar yerine 1-100 arasýnda sayý üretilseydi yalnýzca
     * 100 elemanlý bir dizi tanýmlamak yeterli olurdu. */

    return 0;
}
