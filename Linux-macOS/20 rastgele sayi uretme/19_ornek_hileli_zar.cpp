#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    srand(time(0));

    /* Hileli zarda bir sonucun gelme olasılığı diğerlerinden fazladır.
     * Bir sonucun olasılığını artırmak için o sonuca
     * daha fazla sayı karşılık getirilir.
     *
     * rand() % 10 + 1 ifadesi 1-10 arasında 10 farklı sayı üretir.
     * 6, 7, 8, 9 ve 10 değerlerinin hepsi 6 kabul edilirse:
     *   6 gelme olasılığı: 5/10 = %50
     *   Diğer sayıların her birinin gelme olasılığı: 1/10 = %10 */

    int sayac1 = 0, sayac2 = 0, sayac3 = 0, sayac4 = 0, sayac5 = 0, sayac6 = 0;

    // Zar 6000 kez atılır ve her sonucun kaç kez geldiği sayılır
    for (int i = 1; i <= 6000; i++)
    {
        int zar = rand() % 10 + 1;

        if (zar > 6) zar = 6; // 7, 8, 9 ve 10 değerleri de 6 kabul edilir

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

    cout << "1 gelme sayısı: " << sayac1 << endl;
    cout << "2 gelme sayısı: " << sayac2 << endl;
    cout << "3 gelme sayısı: " << sayac3 << endl;
    cout << "4 gelme sayısı: " << sayac4 << endl;
    cout << "5 gelme sayısı: " << sayac5 << endl;
    cout << "6 gelme sayısı: " << sayac6 << endl;

    /* 6 yaklaşık 3000 kez (6000 / 2), diğer sayıların her biri
     * yaklaşık 600 kez (6000 / 10) gelir.
     * Hilesiz zarda ise her sonuç yaklaşık 1000 kez gelir. */

    return 0;
}
