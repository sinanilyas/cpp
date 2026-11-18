#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[5];

    /* Dizi elemanlarýna dizi adý ve köþeli parantez içine yazýlan
     * indis (sýra numarasý) ile eriþilir.
     * Ýndisler 0'dan baþlar. 5 elemanlý bir dizinin ilk elemanýnýn
     * indisi 0, son elemanýnýn indisi 4'tür. sayilar[5] diye bir
     * eleman yoktur. */

    sayilar[0] = 10;
    sayilar[1] = 20;
    sayilar[2] = 30;
    sayilar[3] = 40;
    sayilar[4] = 50;

    cout << sayilar[0] << endl; // 10
    cout << sayilar[4] << endl; // 50

    // Dizi elemanlarý sýradan deðiþkenler gibi kullanýlabilir.
    sayilar[1] = sayilar[0] + sayilar[4];
    sayilar[2] += 5;

    cout << sayilar[1] << endl; // 60
    cout << sayilar[2] << endl; // 35

    return 0;
}
