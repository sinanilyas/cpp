#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi1 = 10;

    // Önce mevcut deðer kullanýlýr, sonra 1 artýrýlýr
    int sonuc = sayi1++ * 2;

    cout << sonuc << endl; // 20
    cout << sayi1 << endl;  // 11

    int sayi2 = 10;

    // Önce deðer 1 azaltýlýr, sonra kullanýlýr
    sonuc = --sayi2 * 2;

    cout << sonuc << endl; // 18
    cout << sayi2 << endl;  // 9

    /* Ýlk iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * int sonuc = sayi1 * 2;
     * sayi1++;
     *
     * Ýkinci iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * sayi2--;
     * sonuc = sayi2 * 2;
     */

    return 0;
}
