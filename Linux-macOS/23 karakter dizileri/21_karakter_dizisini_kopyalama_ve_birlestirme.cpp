#define _CRT_SECURE_NO_WARNINGS // Bazı derleyicilerin strcpy, strncpy ve strcat için verdiği güvenlik uyarılarını kapatır
#include <iostream>
#include <cstring> // strcpy, strncpy, strcat ve strlen için
using namespace std;

int main(int argc, char** argv)
{
    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";

    /* Diziler atama işleciyle kopyalanamaz:
     *     kopya1 = metin; // HATA
     * Karakterler döngü ile tek tek ya da strcpy ile kopyalanır. */

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
    strcat(metin, " Ali");
    cout << metin << endl; // Selam Ali

    /* strlen, null karakterine kadar olan karakterleri sayar.
     * null karakteri sayılmaz. sizeof ise dizinin eleman sayısını verir. */
    int metinUzunlugu = strlen(metin);

    cout << "'" << metin << "' metninin uzunluğu: " << metinUzunlugu << endl; // 'Selam Ali' metninin uzunluğu: 9
    cout << "metin dizisinin eleman sayısı: " << sizeof(metin) << endl;       // metin dizisinin eleman sayısı: 50

    // Döngü ile yalnızca metnin karakterlerini ve null karakterini kopyalama
    char kopya3[UZUNLUK];

    for (int i = 0; i <= metinUzunlugu; i++) // <= kullanıldığı için null karakteri de kopyalanır
    {
        kopya3[i] = metin[i];
    }

    cout << kopya3 << endl; // Selam Ali

    /* strcpy, strncpy ve strcat dizinin boyutunu denetlemez. Hedef dizide
     * metin ve null karakteri için yeterli yer olmalıdır. Yer yoksa
     * dizinin dışına yazılır. */

    return 0;
}
