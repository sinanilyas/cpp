#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü içerisinde if kullanýlarak yalnýzca
     * belirli koþullarý saðlayan sayýlar toplanabilir.
     * Bu örnekte 1 ile 100 arasýndaki çift sayýlar toplanýr. */

    int toplam = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            toplam += i;
        }
    }

    cout << "Çift sayýlarýn toplamý: " << toplam << endl; // 2550

    return 0;
}
