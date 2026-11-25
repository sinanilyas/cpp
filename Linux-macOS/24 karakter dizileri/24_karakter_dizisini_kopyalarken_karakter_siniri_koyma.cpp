#define _CRT_SECURE_NO_WARNINGS // Bazı derleyicilerin strncpy için verdiği güvenlik uyarılarını kapatır
#include <iostream>
#include <cstring> // strncpy için
using namespace std;

int main(int argc, char** argv)
{
    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";
    char altMetin[UZUNLUK];

    // strncpy(hedef, kaynak, n): Metnin en fazla ilk n karakterini kopyalar.
    strncpy(altMetin, metin, 2);

    // Kaynak metin n karakterden uzunsa null karakteri eklenmez, elle eklenir.
    altMetin[2] = '\0';

    cout << altMetin << endl; // Se

    /* strncpy en fazla n karakter yazar.
     * n, hedef dizinin eleman sayısından büyük olmamalıdır. */

    return 0;
}
