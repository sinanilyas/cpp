#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // HATA: enum tipli değişkene doğrudan tamsayı atanamaz.
    gun bugun = 3;

    return 0;
}
