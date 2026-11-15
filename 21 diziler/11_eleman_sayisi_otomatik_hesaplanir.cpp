#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Baþlangýç deðerleri verilirse köþeli parantez içine eleman
     * sayýsý yazýlmayabilir. Derleyici, verilen baþlangýç deðerlerini
     * sayarak eleman sayýsýný kendisi belirler. */
    int sayilar[] = {10, 20, 30, 40, 50, 60}; // 6 elemanlý dizi

    for (int i = 0; i < 6; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 30 40 50 60 yazdýrýlýr.

    /* Hem eleman sayýsý hem de baþlangýç deðerleri yazýlmazsa
     * (int dizi[];) derleyici dizi için ne kadar yer ayýracaðýný
     * bilemez ve program derlenmez. */

    return 0;
}
