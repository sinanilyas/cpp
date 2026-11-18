#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü kullanýlarak girilen sayýlar karþýlaþtýrýlabilir.
     * Ýlk sayý en büyük kabul edilir.
     * Sonraki adýmlarda daha büyük bir sayý girilirse
     * en büyük deðer güncellenir. */

    int sayi, enBuyuk;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << ". sayýyý giriniz: ";
        cin >> sayi;

        if (i == 1) enBuyuk = sayi;
        else if (sayi > enBuyuk) enBuyuk = sayi;
    }

    cout << "En büyük sayý: " << enBuyuk << endl;

    return 0;
}
