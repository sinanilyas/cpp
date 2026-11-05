#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 10;

    // sayi deðiþkeninin deðerine 5 eklenir
    sayi += 5;

    cout << sayi << endl; // 15

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi + 5;
     *
     * += operatörü, toplama ve atama iþlemlerini
     * tek bir iþlemde birleþtirir.
     */

    return 0;
}
