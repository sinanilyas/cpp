#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    // static_cast ile açık dönüşüm yapılabilir.
    gun bugun = static_cast<gun>(3);
    cout << bugun << endl; // 3

    // int tipindeki bir değişken de dönüştürülebilir.
    int sayi = 5;
    bugun = static_cast<gun>(sayi);
    cout << bugun << endl; // 5

    return 0;
}
