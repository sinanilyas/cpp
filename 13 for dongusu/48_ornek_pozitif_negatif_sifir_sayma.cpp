#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Kullanýcýdan alýnan 10 tamsayýnýn kaçýnýn pozitif,
     * kaçýnýn negatif ve kaçýnýn sýfýr olduðu hesaplanýr.
     * Her durum için ayrý bir sayaç kullanýlýr. */

    int sayi;
    int pozitif = 0, negatif = 0, sifir = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << ". sayýyý giriniz: ";
        cin >> sayi;

        if (sayi > 0) pozitif++;
        else if (sayi < 0) negatif++;
        else sifir++;
    }

    cout << "Pozitif sayý adedi: " << pozitif << endl;
    cout << "Negatif sayý adedi: " << negatif << endl;
    cout << "Sýfýr adedi: " << sifir << endl;

    return 0;
}
