#define _CRT_SECURE_NO_WARNINGS // Bazı derleyicilerin strcat için verdiği güvenlik uyarılarını kapatır
#include <iostream>
#include <cstring> // strcat için
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";

    // strcat(hedef, kaynak): Kaynak metni hedef metnin sonuna ekler.
    strcat(metin, " Ali");

    cout << metin << endl; // Selam Ali

    /* strcat dizinin boyutunu denetlemez. Hedef dizide
     * metin ve null karakteri için yeterli yer olmalıdır.
     * Yeterli yer yoksa dizinin dışına yazılır. */

    return 0;
}
