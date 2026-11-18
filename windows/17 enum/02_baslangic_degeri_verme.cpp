#include <iostream>
using namespace std;

// Ýlk elemanýn deðeri 1 olarak belirlendi.
enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* enum elemanlarýna baþlangýç deðeri verilebilir.
     * Deðer belirtilmeyen sonraki elemanlarýn deðerleri
     * bir önceki elemanýn deðerinden 1 fazla olur. */

    cout << pts << endl; // 1
    cout << sal << endl; // 2
    cout << car << endl; // 3
    cout << per << endl; // 4
    cout << cum << endl; // 5
    cout << cts << endl; // 6
    cout << paz << endl; // 7

    return 0;
}
