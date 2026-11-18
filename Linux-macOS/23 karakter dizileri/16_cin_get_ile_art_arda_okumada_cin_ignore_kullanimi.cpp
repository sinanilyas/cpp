#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    const int MAX = 6;
    char ad[MAX];
    char soyad[MAX];

    cout << "Adınızı giriniz: ";
    cin.get(ad, MAX);

    /* cin.get de Enter karakterini tamponda bırakır. Hatta metin kırpılmışsa
     * okunmayan karakterler de tamponda kalır. cin.ignore(1000, '\n')
     * her iki durumda da tampondaki karakterleri Enter karakterine kadar
     * (Enter dahil, en fazla 1000 karakter) atar. cin >> ile okumadan
     * sonra da aynı satır kullanılır. */
    cin.ignore(1000, '\n');

    cout << "Soyadınızı giriniz: ";
    cin.get(soyad, MAX);

    cout << "Ad: " << ad << endl;
    cout << "Soyad: " << soyad << endl;

    /* Ad olarak Abdurrahman, soyad olarak Kaya girildiğinde:
     * Ad: Abdur
     * Soyad: Kaya
     *
     * cin.ignore satırı olmasaydı tamponda kalan "rahman\n" karakterlerinden
     * ilk 5'i soyad dizisine okunurdu. Kullanıcı soyadını giremeden
     * Soyad: rahma yazdırılırdı. */

    return 0;
}
