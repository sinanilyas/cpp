#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string adSoyad;

    cout << "Adınızı ve soyadınızı giriniz: ";
    getline(cin, adSoyad);

    /* Ad ile soyadı ayıran boşluk find ile bulunur. Boşluktan önceki
     * bölüm ad, sonraki bölüm soyad olarak substr ile alınır. */
    size_t boslukKonumu = adSoyad.find(" ");

    if (boslukKonumu == string::npos)
    {
        cout << "Ad ile soyad arasında boşluk bulunamadı." << endl;
    }
    else
    {
        string ad = adSoyad.substr(0, boslukKonumu);
        string soyad = adSoyad.substr(boslukKonumu + 1);

        cout << "Ad: " << ad << endl;
        cout << "Soyad: " << soyad << endl;
    }

    /* Ahmet Kaya girildiğinde:
     * Ad: Ahmet
     * Soyad: Kaya
     *
     * Mehmet Ali Kaya girildiğinde ilk boşluk bulunduğu için:
     * Ad: Mehmet
     * Soyad: Ali Kaya
     *
     * find yerine aramaya metnin sonundan başlayan rfind kullanılırsa
     * son boşluk bulunur. Bu durumda ad Mehmet Ali, soyad Kaya olur. */

    return 0;
}
