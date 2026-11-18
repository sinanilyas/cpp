#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü içerisinde if kullanılarak yalnızca
     * belirli koşulları sağlayan sayılar toplanabilir.
     * Bu örnekte 1 ile 100 arasındaki çift sayılar toplanır. */

    int toplam = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            toplam += i;
        }
    }

    cout << "Çift sayıların toplamı: " << toplam << endl; // 2550

    return 0;
}
