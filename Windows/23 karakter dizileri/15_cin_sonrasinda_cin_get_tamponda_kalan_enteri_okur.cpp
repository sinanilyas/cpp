#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int MAX = 30;
    int yas;
    char adSoyad[MAX];

    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    cout << "Adınızı ve soyadınızı giriniz: ";
    cin.get(adSoyad, MAX); // MANTIK HATASI: Tamponda kalan Enter karakteri okunur

    cout << "Yaş: " << yas << endl;
    cout << "Ad soyad: " << adSoyad << endl;

    /* cin >> yas, yaş değerini okur ama Enter karakterini ('\n') girdi
     * tamponunda bırakır. cin.get tamponda bekleyen bu Enter karakterini
     * görünce hemen durur. Kullanıcı ad soyad giremeden program devam eder
     * ve adSoyad dizisine boş bir metin okunur.
     *
     * Ekran çıktısı (yaş olarak 20 girildiğinde):
     * Yaşınızı giriniz: 20
     * Adınızı ve soyadınızı giriniz: Yaş: 20
     * Ad soyad:
     */

    return 0;
}
