#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    // enum anahtar kelimesi kullanýlarak deðiþken tanýmlandý.
    enum gun bugun = pts;

    /* C++ dilinde enum tipli deðiþken tanýmlanýrken
     * enum anahtar kelimesinin yazýlmasý zorunlu deðildir.
     * Her iki tanýmlama da geçerlidir. */
    gun yarin = sal;

    cout << bugun << endl; // 1
    cout << yarin << endl; // 2

    return 0;
}
