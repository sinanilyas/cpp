#include <iostream>
using namespace std;

// enum tanýmlanýrken ayný zamanda deðiþken de tanýmlanabilir.
enum gun {pts = 1, sal, car, per, cum, cts, paz} bugun = pts;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    cout << bugun << endl; // 1

    // bugun deðiþkeninin deðeri deðiþtirilebilir
    bugun = cum;
    cout << bugun << endl; // 5

    // Ayný tipte baþka deðiþkenler de tanýmlanabilir
    gun yarin = cts;
    cout << yarin << endl; // 6

    return 0;
}
