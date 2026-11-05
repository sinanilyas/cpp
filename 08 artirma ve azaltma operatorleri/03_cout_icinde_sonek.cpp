#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // Önce mevcut deðer yazdýrýlýr, sonra 1 artýrýlýr
    cout << sayi++ << endl; // 10

    cout << sayi << endl;   // 11

    /* sayi++ ifadesinde önce deðiþkenin mevcut deðeri
     * kullanýlýr, ardýndan deðiþkenin deðeri 1 artýrýlýr.
     *
     * Yukarýdaki iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * cout << sayi << endl;
     * sayi++;
     */

    return 0;
}
