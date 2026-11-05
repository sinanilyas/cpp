#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int a = 10;
    int b = 20;

    // Bileþik atama operatörleri saðdan sola deðerlendirilir.
    a += b += 5;

    cout << a << endl; // 35
    cout << b << endl; // 25

    /* Yukarýdaki iþlem aþaðýdaki iþlemlerle eþdeðerdir:
     *
     * b += 5;
     * a += b;
     *
     * Önce b deðiþkenine 5 eklenir ve b = 25 olur.
     * Ardýndan a deðiþkenine b eklenir ve a = 35 olur.
     *
     * Bileþik atama operatörleri saðdan sola birleþir.
     */

    return 0;
}
