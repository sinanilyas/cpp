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

    int sayac1 = 0, sayac2 = 0, sayac3 = 0, sayac4 = 0, sayac5 = 0, sayac6 = 0;

    // Zar 6000 kez atılır ve her sonucun kaç kez geldiği sayılır
    for (int i = 1; i <= 6000; i++)
    {
        int zar = rand() % 6 + 1;

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

    /* Rastgele sayılar aralıktaki her değeri yaklaşık olarak
     * eşit sıklıkta üretir. Bu yüzden her sonuç yaklaşık
     * 1000 kez (6000 / 6) gelir.
     * Atış sayısı arttıkça her sonucun oranı 1/6'ya daha çok yaklaşır. */

    return 0;
}
