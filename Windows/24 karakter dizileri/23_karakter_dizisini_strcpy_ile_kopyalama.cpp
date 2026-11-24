#define _CRT_SECURE_NO_WARNINGS // Bazı derleyicilerin strcpy için verdiği güvenlik uyarılarını kapatır
#include <iostream>
#include <cstring> // strcpy için
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";
    char kopya[UZUNLUK];

    // strcpy(hedef, kaynak): Metni null karakteri dahil kopyalar.
    strcpy(kopya, metin);

    cout << kopya << endl; // Selam

    /* strcpy dizinin boyutunu denetlemez. Hedef dizide
     * metin ve null karakteri için yeterli yer olmalıdır.
     * Yeterli yer yoksa dizinin dışına yazılır. */

    return 0;
}
