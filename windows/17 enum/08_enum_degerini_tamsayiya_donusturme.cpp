#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = car;

    /* static_cast<int>() ile enum tipindeki
     * bir değer int tipine dönüştürülebilir. */

    int sayi = static_cast<int>(bugun);

    cout << bugun << endl; // 3
    cout << sayi << endl;  // 3

    cout << static_cast<int>(cum) << endl; // 5

    return 0;
}
