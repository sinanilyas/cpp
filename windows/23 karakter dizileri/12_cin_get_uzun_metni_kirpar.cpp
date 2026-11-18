#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int MAX = 6;
    char ad[MAX];

    cout << "Adýnýzý giriniz: ";

    /* cin.get(dizi, MAX) en fazla MAX - 1 karakter okur. MAX deðerine
     * null karakteri dahildir; son eleman null karakteri için ayrýlýr.
     * Girilen metin daha uzunsa hata oluþmaz, metin kýrpýlýr. */
    cin.get(ad, MAX);

    cout << "Merhaba " << ad << endl;

    /* Ali          -> Ali
     * Abdurrahman  -> Abdur
     *
     * Okunmayan karakterler girdi tamponunda kalýr.
     * MAX yerine sizeof(ad) de yazýlabilir: cin.get(ad, sizeof(ad)); */

    return 0;
}
