#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // sayi deðiþkeninin deðeri 4 ile çarpýlýr
    sayi *= 4;

    cout << sayi << endl; // 40

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi * 4;
     *
     * *= operatörü, çarpma ve atama iþlemlerini
     * tek bir iþlemde birleþtirir.
     */

    return 0;
}
