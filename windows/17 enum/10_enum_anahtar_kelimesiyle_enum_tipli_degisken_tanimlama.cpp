#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // enum anahtar kelimesi kullanılarak değişken tanımlandı.
    enum gun bugun = pts;

    /* C++ dilinde enum tipli değişken tanımlanırken
     * enum anahtar kelimesinin yazılması zorunlu değildir.
     * Her iki tanımlama da geçerlidir. */
    gun yarin = sal;

    cout << bugun << endl; // 1
    cout << yarin << endl; // 2

    return 0;
}
