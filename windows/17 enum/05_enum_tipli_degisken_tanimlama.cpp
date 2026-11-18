#include <iostream>
using namespace std;

// gun adýnda yeni bir veri tipi tanýmlandý.
enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* gun tipinde bir deðiþken tanýmlanabilir ve
     * bu deðiþkene enum elemanlarý atanabilir. */
    gun bugun = pts;
    cout << bugun << endl; // 1

    bugun = cum;
    cout << bugun << endl; // 5

    return 0;
}
