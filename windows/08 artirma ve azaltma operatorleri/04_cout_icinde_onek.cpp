#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // Önce deðer 1 artýrýlýr, sonra yazdýrýlýr
    cout << ++sayi << endl; // 11

    cout << sayi << endl;   // 11

    /* ++sayi ifadesinde önce deðiþkenin deðeri
     * 1 artýrýlýr, ardýndan yeni deðeri kullanýlýr.
     *
     * Yukarýdaki iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * sayi++;
     * cout << sayi << endl;
     */

    return 0;
}
