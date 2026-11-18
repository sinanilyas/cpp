#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    const int MAX = 6;
    char ad[MAX];

    cout << "Adınızı giriniz: ";

    /* cin.get(dizi, MAX) en fazla MAX - 1 karakter okur. MAX değerine
     * null karakteri dahildir; son eleman null karakteri için ayrılır.
     * Girilen metin daha uzunsa hata oluşmaz, metin kırpılır. */
    cin.get(ad, MAX);

    cout << "Merhaba " << ad << endl;

    /* Ali          -> Ali
     * Abdurrahman  -> Abdur
     *
     * Okunmayan karakterler girdi tamponunda kalır.
     * MAX yerine sizeof(ad) de yazılabilir: cin.get(ad, sizeof(ad)); */

    return 0;
}
