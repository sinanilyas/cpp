#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    // HATA: enum tipli deðiþkene doðrudan tamsayý atanamaz.
    gun bugun = 3;

    return 0;
}
