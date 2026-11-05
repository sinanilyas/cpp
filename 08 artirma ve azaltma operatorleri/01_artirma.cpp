#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // sayi deðiþkeninin deðeri 1 artýrýlýr
    sayi++;

    cout << sayi << endl; // 11

    /* Yukarýdaki iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * sayi = sayi + 1;
     * sayi += 1;
     *
     * ++ operatörü, deðiþkenin deðerini 1 artýrýr.
     */

    return 0;
}
