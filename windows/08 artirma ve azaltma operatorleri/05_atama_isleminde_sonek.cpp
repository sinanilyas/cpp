#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // Önce mevcut deðer atanýr, sonra 1 artýrýlýr
    int sonuc = sayi++;

    cout << sayi << endl;  // 11
    cout << sonuc << endl; // 10

    /* sayi++ ifadesinde önce deðiþkenin mevcut deðeri
     * kullanýlýr, ardýndan deðiþkenin deðeri 1 artýrýlýr.
     *
     * Yukarýdaki iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * int sonuc = sayi;
     * sayi++;
     */

    return 0;
}
