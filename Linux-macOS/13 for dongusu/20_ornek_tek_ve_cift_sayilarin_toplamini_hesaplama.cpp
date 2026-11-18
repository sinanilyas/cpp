#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü içerisinde if kullanılarak yalnızca
     * belirli koşulları sağlayan sayılar toplanabilir.
     * Bu örnekte 1 ile 100 arasındaki çift sayılar toplanır. */

    int tek_toplam = 0, cift_toplam = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0) cift_toplam += i;
        else tek_toplam += i;
    }

    cout << "Tek sayıların toplamı: " << tek_toplam << endl;
    cout << "Çift sayıların toplamı: " << cift_toplam << endl;

    return 0;
}
