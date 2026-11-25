#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    typedef int tamsayi;

    /* typedef yeni bir veri tipi oluşturmaz.
     * Bu nedenle orijinal veri tipi ile alternatif ismin
     * bellekte kapladığı alan aynıdır. */

    cout << sizeof(int) << endl;     // 4
    cout << sizeof(tamsayi) << endl; // 4

    int sayi1 = 10;
    tamsayi sayi2 = 20;

    cout << sizeof(sayi1) << endl; // 4
    cout << sizeof(sayi2) << endl; // 4

    return 0;
}
