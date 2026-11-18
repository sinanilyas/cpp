#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = car;

    /* sizeof operatörü, bir veri tipinin veya
     * değişkenin bellekte kapladığı alanı
     * bayt cinsinden verir. */

    cout << sizeof(int) << endl;   // Genellikle 4
    cout << sizeof(gun) << endl;   // int ile aynı
    cout << sizeof(bugun) << endl; // int ile aynı
    cout << sizeof(pts) << endl;   // int ile aynı

    return 0;
}
