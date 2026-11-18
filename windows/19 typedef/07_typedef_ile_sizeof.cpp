#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    typedef int tamsayi;

    /* typedef yeni bir veri tipi oluþturmaz.
     * Bu nedenle orijinal veri tipi ile alternatif ismin
     * bellekte kapladýðý alan aynýdýr. */

    cout << sizeof(int) << endl;     // 4
    cout << sizeof(tamsayi) << endl; // 4

    int sayi1 = 10;
    tamsayi sayi2 = 20;

    cout << sizeof(sayi1) << endl; // 4
    cout << sizeof(sayi2) << endl; // 4

    return 0;
}
