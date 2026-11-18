#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    /* static_cast<int>() ile enum tipindeki
     * bir deðer int tipine dönüþtürülebilir. */

    int sayi = static_cast<int>(bugun);

    cout << bugun << endl; // 3
    cout << sayi << endl;  // 3

    cout << static_cast<int>(cum) << endl; // 5

    return 0;
}
