#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // sayi deðiþkeninin deðerinden 3 çýkarýlýr
    sayi -= 3;

    cout << sayi << endl; // 7

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi - 3;
     *
     * -= operatörü, çýkarma ve atama iþlemlerini
     * tek bir iþlemde birleþtirir.
     */

    return 0;
}
