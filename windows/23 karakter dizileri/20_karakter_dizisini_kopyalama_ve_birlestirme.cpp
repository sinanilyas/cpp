#define _CRT_SECURE_NO_WARNINGS // Bazý derleyicilerin strcpy, strncpy ve strcat için verdiði güvenlik uyarýlarýný kapatýr
#include <iostream>
#include <cstring> // strcpy, strncpy, strcat ve strlen için
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";

    /* Diziler atama iþleciyle kopyalanamaz:
     *     kopya1 = metin; // HATA
     * Karakterler döngü ile tek tek ya da strcpy ile kopyalanýr. */

    // Döngü ile kopyalama
    char kopya1[UZUNLUK];

    for (int i = 0; i < UZUNLUK; i++)
    {
        kopya1[i] = metin[i];
    }

    cout << kopya1 << endl; // Selam

    // strcpy(hedef, kaynak): Metni null karakteri dahil kopyalar.
    char kopya2[UZUNLUK];
    strcpy(kopya2, metin);
    cout << kopya2 << endl; // Selam

    // strncpy(hedef, kaynak, n): Metnin en fazla ilk n karakterini kopyalar.
    char altMetin[UZUNLUK];
    strncpy(altMetin, metin, 2);
    altMetin[2] = '\0'; // Kaynak metin n karakterden uzunsa null karakteri eklenmez, elle eklenir.
    cout << altMetin << endl; // Se

    // strcat(hedef, kaynak): Kaynak metni hedef metnin sonuna ekler.
    strcat(metin, " Nasýlsýn?");
    cout << metin << endl; // Selam Nasýlsýn?

    /* strlen, null karakterine kadar olan karakterleri sayar.
     * null karakteri sayýlmaz. sizeof ise dizinin eleman sayýsýný verir. */
    int metinUzunlugu = strlen(metin);

    cout << "'" << metin << "' metninin uzunluðu: " << metinUzunlugu << endl; // 'Selam Nasýlsýn?' metninin uzunluðu: 15
    cout << "metin dizisinin eleman sayýsý: " << sizeof(metin) << endl;       // metin dizisinin eleman sayýsý: 50

    // Döngü ile yalnýzca metnin karakterlerini ve null karakterini kopyalama
    char kopya3[UZUNLUK];

    for (int i = 0; i <= metinUzunlugu; i++) // <= kullanýldýðý için null karakteri de kopyalanýr
    {
        kopya3[i] = metin[i];
    }

    cout << kopya3 << endl; // Selam Nasýlsýn?

    /* strcpy, strncpy ve strcat dizinin boyutunu denetlemez. Hedef dizide
     * metin ve null karakteri için yeterli yer olmalýdýr. Yer yoksa
     * dizinin dýþýna yazýlýr. */

    return 0;
}
