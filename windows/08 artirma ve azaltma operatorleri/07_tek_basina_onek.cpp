#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // Önek kullanýmýyla deðer 1 artýrýlýr
    ++sayi;

    cout << sayi << endl; // 11

    /* Artýrma operatörü deðiþkenin önüne veya sonuna
     * yazýldýðýnda tek baþýna ayný sonucu verir.
     *
     * ++sayi;
     * sayi++;
     *
     * Her iki kullaným da deðiþkenin deðerini 1 artýrýr.
     */

    return 0;
}
