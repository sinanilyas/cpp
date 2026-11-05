#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* typedef, mevcut bir veri tipine alternatif bir isim vermek için kullanýlýr.
     * Aþaðýdaki tanýmlama, int veri tipine tamsayi ismini verir.
     * typedef yeni bir veri tipi oluþturmaz. */

    typedef int tamsayi;

    int sayi1 = 10;
    tamsayi sayi2 = 20;

    cout << sayi1 << endl; // 10
    cout << sayi2 << endl; // 20

    return 0;
}
