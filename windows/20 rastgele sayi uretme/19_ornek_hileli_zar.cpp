#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* Hileli zarda bir sonucun gelme olasýlýðý diðerlerinden fazladýr.
     * Bir sonucun olasýlýðýný artýrmak için o sonuca
     * daha fazla sayý karþýlýk getirilir.
     *
     * rand() % 10 + 1 ifadesi 1-10 arasýnda 10 farklý sayý üretir.
     * 6, 7, 8, 9 ve 10 deðerlerinin hepsi 6 kabul edilirse:
     *   6 gelme olasýlýðý: 5/10 = %50
     *   Diðer sayýlarýn her birinin gelme olasýlýðý: 1/10 = %10 */

    int sayac1 = 0, sayac2 = 0, sayac3 = 0, sayac4 = 0, sayac5 = 0, sayac6 = 0;

    // Zar 6000 kez atýlýr ve her sonucun kaç kez geldiði sayýlýr
    for (int i = 1; i <= 6000; i++)
    {
        int zar = rand() % 10 + 1;

        if (zar > 6) zar = 6; // 7, 8, 9 ve 10 deðerleri de 6 kabul edilir

        switch (zar)
        {
            case 1:
                sayac1++;
                break;
            case 2:
                sayac2++;
                break;
            case 3:
                sayac3++;
                break;
            case 4:
                sayac4++;
                break;
            case 5:
                sayac5++;
                break;
            case 6:
                sayac6++;
                break;
        }
    }

    cout << "1 gelme sayýsý: " << sayac1 << endl;
    cout << "2 gelme sayýsý: " << sayac2 << endl;
    cout << "3 gelme sayýsý: " << sayac3 << endl;
    cout << "4 gelme sayýsý: " << sayac4 << endl;
    cout << "5 gelme sayýsý: " << sayac5 << endl;
    cout << "6 gelme sayýsý: " << sayac6 << endl;

    /* 6 yaklaþýk 3000 kez (6000 / 2), diðer sayýlarýn her biri
     * yaklaþýk 600 kez (6000 / 10) gelir.
     * Hilesiz zarda ise her sonuç yaklaþýk 1000 kez gelir. */

    return 0;
}
