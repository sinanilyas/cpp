#include <iostream>
using namespace std;

// Haftanýn günlerini temsil eden enum tipi
enum gun {pts, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* enum, isimlendirilmiþ tamsayý sabitleri tanýmlamak için kullanýlýr.
     * Ýlk elemana varsayýlan olarak 0 deðeri verilir.
     * Sonraki elemanlarýn deðerleri birer artar. */

    cout << pts << endl; // 0
    cout << sal << endl; // 1
    cout << car << endl; // 2
    cout << per << endl; // 3
    cout << cum << endl; // 4
    cout << cts << endl; // 5
    cout << paz << endl; // 6

    return 0;
}
