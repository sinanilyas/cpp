#include <iostream>
using namespace std;

// enum tanımlanırken aynı zamanda değişken de tanımlanabilir.
enum gun {pts = 1, sal, car, per, cum, cts, paz} bugun = pts;

int main(int argc, char** argv)
{
    cout << bugun << endl; // 1

    // bugun değişkeninin değeri değiştirilebilir
    bugun = cum;
    cout << bugun << endl; // 5

    // Aynı tipte başka değişkenler de tanımlanabilir
    gun yarin = cts;
    cout << yarin << endl; // 6

    return 0;
}
