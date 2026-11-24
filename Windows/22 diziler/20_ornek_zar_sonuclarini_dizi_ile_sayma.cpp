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

    /* Her zar sonucunun kaç kez geldiği bir dizide sayılır.
     * sayaclar[0] 1'lerin, sayaclar[1] 2'lerin, ..., sayaclar[5]
     * 6'ların sayısını tutar. Bütün sayaçlar başlangıçta 0'dır. */
    int sayaclar[6] = {};

    for (int i = 1; i <= 6000; i++)
    {
        int zar = rand() % 6 + 1;

        // Zar değerinden 1 çıkarılarak indis bulunur ve o sayaç artırılır
        sayaclar[zar - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " gelme sayısı: " << sayaclar[i] << endl;
    }

    // Örneğin 1 gelme sayısı: 1012

    /* Altı ayrı sayaç değişkeni ve switch kullanmak yerine tek bir
     * dizi ve sayaclar[zar - 1]++ satırı yeterli olur.
     * Zar yerine 1-100 arasında sayı üretilseydi yalnızca
     * 100 elemanlı bir dizi tanımlamak yeterli olurdu. */

    return 0;
}
