#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int MAX = 30;
    int yas;
    char adSoyad[MAX];

    cout << "Yaþýnýzý giriniz: ";
    cin >> yas;

    cout << "Adýnýzý ve soyadýnýzý giriniz: ";
    cin.get(adSoyad, MAX); // MANTIK HATASI: Tamponda kalan Enter karakteri okunur

    cout << "Yaþ: " << yas << endl;
    cout << "Ad soyad: " << adSoyad << endl;

    /* cin >> yas, yaþ deðerini okur ama Enter karakterini ('\n') girdi
     * tamponunda býrakýr. cin.get tamponda bekleyen bu Enter karakterini
     * görünce hemen durur. Kullanýcý ad soyad giremeden program devam eder
     * ve adSoyad dizisine boþ bir metin okunur.
     *
     * Ekran çýktýsý (yaþ olarak 20 girildiðinde):
     * Yaþýnýzý giriniz: 20
     * Adýnýzý ve soyadýnýzý giriniz: Yaþ: 20
     * Ad soyad:
     */

    return 0;
}
