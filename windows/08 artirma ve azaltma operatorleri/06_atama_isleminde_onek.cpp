#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // Önce deðer 1 artýrýlýr, sonra atanýr
    int sonuc = ++sayi;

    cout << sayi << endl;  // 11
    cout << sonuc << endl; // 11

    /* ++sayi ifadesinde önce deðiþkenin deðeri
     * 1 artýrýlýr, ardýndan yeni deðeri kullanýlýr.
     *
     * Yukarýdaki iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * sayi++;
     * int sonuc = sayi;
     */

    return 0;
}
