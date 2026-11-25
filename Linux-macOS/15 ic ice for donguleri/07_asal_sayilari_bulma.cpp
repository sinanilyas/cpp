#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Dış döngü 2'den 100'e kadar olan sayıları kontrol eder.
     * İç döngü her sayının asal olup olmadığını belirler.
     * Bir bölen bulunduğunda break ile iç döngü sonlandırılır.
     * Asal olan sayılar ekrana yazdırılır. */

    for (int sayi = 2; sayi <= 100; sayi++)
    {
        bool asal = true;

        for (int bolen = 2; bolen < sayi; bolen++)
        {
            if (sayi % bolen == 0)
            {
                asal = false;
                break;
            }
        }

        if (asal) cout << sayi << " ";
    }

    return 0;
}
