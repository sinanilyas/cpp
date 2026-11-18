#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü içerisinde if kullanýlarak yalnýzca
     * belirli koþullarý saðlayan sayýlar toplanabilir.
     * Bu örnekte 1 ile 100 arasýndaki çift sayýlar toplanýr. */

    int tek_toplam = 0, cift_toplam = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0) cift_toplam += i;
        else tek_toplam += i;
    }

    cout << "Tek sayýlarýn toplamý: " << tek_toplam << endl;
    cout << "Çift sayýlarýn toplamý: " << cift_toplam << endl;

    return 0;
}
