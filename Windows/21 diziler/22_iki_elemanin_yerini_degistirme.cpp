#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayilar[] = {10, 20, 30, 40, 50};

    /* 1 ve 3 indisli elemanların yerleri değiştiriliyor.
     * Değerlerden biri kaybolmasın diye geçici bir değişken kullanılır. */
    int gecici = sayilar[1];
    sayilar[1] = sayilar[3];
    sayilar[3] = gecici;

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 40 30 20 50 yazdırılır.

    /* Geçici değişken kullanılmadan
     *
     *     sayilar[1] = sayilar[3];
     *     sayilar[3] = sayilar[1];
     *
     * yazılırsa ilk atamada sayilar[1]'in eski değeri (20) kaybolur
     * ve iki eleman da 40 olur. İki bardaktaki suyun yerini
     * değiştirmek için üçüncü bir bardak gerekmesine benzer.
     *
     * Sıralama algoritmaları elemanların yerini bu yöntemle değiştirir. */

    return 0;
}
