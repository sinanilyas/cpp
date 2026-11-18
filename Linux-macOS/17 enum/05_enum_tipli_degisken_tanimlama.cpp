#include <iostream>
using namespace std;

// gun adında yeni bir veri tipi tanımlandı.
enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    /* gun tipinde bir değişken tanımlanabilir ve
     * bu değişkene enum elemanları atanabilir. */
    gun bugun = pts;
    cout << bugun << endl; // 1

    bugun = cum;
    cout << bugun << endl; // 5

    return 0;
}
