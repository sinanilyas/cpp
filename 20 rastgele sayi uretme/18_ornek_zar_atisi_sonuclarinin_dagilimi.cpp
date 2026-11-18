#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    int sayac1 = 0, sayac2 = 0, sayac3 = 0, sayac4 = 0, sayac5 = 0, sayac6 = 0;

    // Zar 6000 kez atýlýr ve her sonucun kaç kez geldiði sayýlýr
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

    cout << "1 gelme sayýsý: " << sayac1 << endl;
    cout << "2 gelme sayýsý: " << sayac2 << endl;
    cout << "3 gelme sayýsý: " << sayac3 << endl;
    cout << "4 gelme sayýsý: " << sayac4 << endl;
    cout << "5 gelme sayýsý: " << sayac5 << endl;
    cout << "6 gelme sayýsý: " << sayac6 << endl;

    /* Rastgele sayýlar aralýktaki her deðeri yaklaþýk olarak
     * eþit sýklýkta üretir. Bu yüzden her sonuç yaklaþýk
     * 1000 kez (6000 / 6) gelir.
     * Atýþ sayýsý arttýkça her sonucun oraný 1/6'ya daha çok yaklaþýr. */

    return 0;
}
