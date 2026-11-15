#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int MAX = 6;
    char ad[MAX];
    char soyad[MAX];

    cout << "Adýnýzý giriniz: ";
    cin.get(ad, MAX);

    /* cin.get de Enter karakterini tamponda býrakýr. Hatta metin kýrpýlmýþsa
     * okunmayan karakterler de tamponda kalýr. cin.ignore(1000, '\n')
     * her iki durumda da tampondaki karakterleri Enter karakterine kadar
     * (Enter dahil, en fazla 1000 karakter) atar. cin >> ile okumadan
     * sonra da ayný satýr kullanýlýr. */
    cin.ignore(1000, '\n');

    cout << "Soyadýnýzý giriniz: ";
    cin.get(soyad, MAX);

    cout << "Ad: " << ad << endl;
    cout << "Soyad: " << soyad << endl;

    /* Ad olarak Abdurrahman, soyad olarak Kaya girildiðinde:
     * Ad: Abdur
     * Soyad: Kaya
     *
     * cin.ignore satýrý olmasaydý tamponda kalan "rahman\n" karakterlerinden
     * ilk 5'i soyad dizisine okunurdu. Kullanýcý soyadýný giremeden
     * Soyad: rahma yazdýrýlýrdý. */

    return 0;
}
