#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    gun bugun = car;

    /* enum tipi int tipine otomatik dönüştürülür.
     * static_cast zorunlu değildir. */

    int sayi = bugun;

    cout << bugun << endl; // 3
    cout << sayi << endl;  // 3

    return 0;
}
