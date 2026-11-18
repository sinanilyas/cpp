#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = car;

    /* enum tipi int tipine otomatik dönüştürülür.
     * static_cast zorunlu değildir. */

    int sayi = bugun;

    cout << bugun << endl; // 3
    cout << sayi << endl;  // 3

    return 0;
}
