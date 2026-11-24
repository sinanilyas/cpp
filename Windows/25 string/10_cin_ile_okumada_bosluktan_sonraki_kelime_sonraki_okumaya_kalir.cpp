#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string adSoyad;
    string sehir;

    cout << "Adınızı ve soyadınızı giriniz: ";
    cin >> adSoyad; // MANTIK HATASI: Yalnızca ilk kelime okunur

    cout << "Şehrinizi giriniz: ";
    cin >> sehir;

    cout << "Ad soyad: " << adSoyad << endl;
    cout << "Şehir: " << sehir << endl;

    /* Ahmet Kaya girilirse cin >> adSoyad yalnızca "Ahmet"i okur.
     * " Kaya" girdi tamponunda kalır. Sonraki cin, kullanıcının şehir
     * girmesini beklemeden tampondaki "Kaya"yı okur.
     *
     * Ekran çıktısı:
     * Adınızı ve soyadınızı giriniz: Ahmet Kaya
     * Şehrinizi giriniz: Ad soyad: Ahmet
     * Şehir: Kaya
     */

    return 0;
}
