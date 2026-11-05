#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 15;

    // sayi deðiþkeninin deðeri 2'ye bölünür
    sayi /= 2;

    cout << sayi << endl; // 7

    /* Yukarýdaki iþlem aþaðýdaki iþlemle eþdeðerdir:
     *
     * sayi = sayi / 2;
     *
     * /= operatörü, bölme ve atama iþlemlerini
     * tek bir iþlemde birleþtirir.
     *
     * Her iki iþlenen de tamsayý olduðu için
     * bölme iþleminin sonucu 7 olur.
     */

    return 0;
}
