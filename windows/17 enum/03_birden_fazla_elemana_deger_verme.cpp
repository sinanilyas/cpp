#include <iostream>
#include <windows.h>
using namespace std;

// enum elemanlarına farklı değerler atanabilir.
enum gun {pts = 1, sal, car = 10, per, cum = 20, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* enum elemanlarına ayrı ayrı değerler verilebilir.
     * Değer belirtilmeyen elemanlar, bir önceki
     * elemanın değerinden 1 fazla değer alır. */

    cout << pts << endl; // 1
    cout << sal << endl; // 2
    cout << car << endl; // 10
    cout << per << endl; // 11
    cout << cum << endl; // 20
    cout << cts << endl; // 21
    cout << paz << endl; // 22

    return 0;
}
