#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü içerisinde kullanýcýdan tekrar tekrar deðer alýnabilir.
     * Bu örnekte kullanýcýdan alýnan 5 tamsayýnýn toplamý hesaplanýr. */

    int sayi, toplam = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << ". sayýyý giriniz: ";
        cin >> sayi;

        toplam += sayi;
    }

    cout << "Sayýlarýn toplamý: " << toplam << endl;

    return 0;
}
