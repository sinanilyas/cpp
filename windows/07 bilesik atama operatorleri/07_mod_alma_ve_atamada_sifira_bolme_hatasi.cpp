#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 17;
    int bolen = 0;

    // HATA: Sýfýra bölümden kalan hesaplanamaz
    sayi %= bolen;

    cout << sayi << endl;

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi % bolen;
     *
     * Sýfýra bölümden kalan hesaplanamaz.
     * Program çalýþma sýrasýnda hata vererek sonlanabilir.
     */

    return 0;
}
