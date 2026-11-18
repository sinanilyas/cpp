#include <iostream>
using namespace std;

// enum elemanlarýna farklý deðerler atanabilir.
enum gun {pts = 1, sal, car = 10, per, cum = 20, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* enum elemanlarýna ayrý ayrý deðerler verilebilir.
     * Deðer belirtilmeyen elemanlar, bir önceki
     * elemanýn deðerinden 1 fazla deðer alýr. */

    cout << pts << endl; // 1
    cout << sal << endl; // 2
    cout << car << endl; // 10
    cout << per << endl; // 11
    cout << cum << endl; // 20
    cout << cts << endl; // 21
    cout << paz << endl; // 22

    return 0;
}
