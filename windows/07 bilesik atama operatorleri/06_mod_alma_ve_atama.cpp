#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 17;

    // sayi deðiþkeninin 5'e bölümünden kalan hesaplanýr
    sayi %= 5;

    cout << sayi << endl; // 2

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi % 5;
     *
     * %= operatörü, mod alma ve atama iþlemlerini
     * tek bir iþlemde birleþtirir.
     *
     * % operatörü yalnýzca tamsayý tipleriyle kullanýlabilir.
     */

    return 0;
}
