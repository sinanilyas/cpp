#include <iostream>
#include <windows.h>
using namespace std;

// İlk elemanın değeri 1 olarak belirlendi.
enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* enum elemanlarına başlangıç değeri verilebilir.
     * Değer belirtilmeyen sonraki elemanların değerleri
     * bir önceki elemanın değerinden 1 fazla olur. */

    cout << pts << endl; // 1
    cout << sal << endl; // 2
    cout << car << endl; // 3
    cout << per << endl; // 4
    cout << cum << endl; // 5
    cout << cts << endl; // 6
    cout << paz << endl; // 7

    return 0;
}
