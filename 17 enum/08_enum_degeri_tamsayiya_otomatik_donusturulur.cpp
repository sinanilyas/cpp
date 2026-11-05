#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    /* enum tipi int tipine otomatik dönüþtürülür.
     * static_cast zorunlu deðildir. */

    int sayi = bugun;

    cout << bugun << endl; // 3
    cout << sayi << endl;  // 3

    return 0;
}
