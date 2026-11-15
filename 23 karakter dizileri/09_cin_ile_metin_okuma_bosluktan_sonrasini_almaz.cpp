#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char ad[20];

    cout << "Adýnýzý giriniz: ";

    /* cin ile karakter dizisine metin okunabilir. Okunan karakterlerin
     * sonuna null karakteri otomatik olarak eklenir. */
    cin >> ad;

    cout << "Merhaba " << ad << endl;

    /* cin, bir boþluk karakterine (boþluk, sekme, Enter) gelince
     * okumayý keser. Baþtaki boþluklar atlanýr. Girilen metne göre
     * diziye okunan metin:
     *
     * Ahmet         -> Ahmet
     *    Ahmet      -> Ahmet
     * Ahmet Kaya    -> Ahmet
     *
     * Okunmayan karakterler (" Kaya") girdi tamponunda kalýr ve
     * sonraki okuma iþleminde okunur. */

    return 0;
}
