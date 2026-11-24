#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // Önek kullanımıyla değer 1 artırılır
    ++sayi;

    cout << sayi << endl; // 11

    /* Artırma operatörü değişkenin önüne veya sonuna
     * yazıldığında tek başına aynı sonucu verir.
     *
     * ++sayi;
     * sayi++;
     *
     * Her iki kullanım da değişkenin değerini 1 artırır.
     */

    return 0;
}
