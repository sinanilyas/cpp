#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 15;
    int bolen = 0;

    // HATA: Tamsayýnýn sýfýra bölünmesi tanýmsýz davranýþtýr
    sayi /= bolen;

    cout << sayi << endl;

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi / bolen;
     *
     * Tamsayýlar sýfýra bölünemez.
     * Program çalýþma sýrasýnda hata vererek sonlanabilir.
     */

    return 0;
}
