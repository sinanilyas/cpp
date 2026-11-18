#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dýþ döngü 2'den 100'e kadar olan sayýlarý kontrol eder.
     * Ýç döngü her sayýnýn asal olup olmadýðýný belirler.
     * Bir bölen bulunduðunda break ile iç döngü sonlandýrýlýr.
     * Asal olan sayýlar ekrana yazdýrýlýr. */

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
