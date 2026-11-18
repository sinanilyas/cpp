#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    // HATA: enum tipli değişkene doğrudan tamsayı atanamaz.
    gun bugun = 3;

    return 0;
}
