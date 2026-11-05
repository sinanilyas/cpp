#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Kullanýcýdan alýnan sayýlarýn aritmetik ortalamasý
     * hesaplanabilir. */

    int sayi, toplam = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << ". sayýyý giriniz: ";
        cin >> sayi;

        toplam += sayi;
    }

    // Bölme iþleminde 5.0 kullanýlarak sonucun double olmasý saðlanýr.
    double ortalama = toplam / 5.0;

    cout << "Sayýlarýn ortalamasý: " << ortalama << endl;

    return 0;
}
