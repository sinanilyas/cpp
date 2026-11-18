#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Tekrar sayýsý önceden bilinmiyorsa sonsuz döngü kullanýlabilir.
     * Kullanýcý 0 girdiðinde break ile döngü sonlandýrýlýr.
     * Girilen diðer sayýlarýn toplamý hesaplanýr. */

    int sayi, toplam = 0;

    for (;;)
    {
        cout << "Bir tamsayý giriniz (Çýkýþ: 0): ";
        cin >> sayi;

        if (sayi == 0) break;

        toplam += sayi;
    }

    cout << "Sayýlarýn toplamý: " << toplam << endl;

    return 0;
}
