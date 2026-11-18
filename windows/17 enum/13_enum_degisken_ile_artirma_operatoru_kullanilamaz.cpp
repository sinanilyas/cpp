#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    /* enum tipli deðiþkenlerde ++ ve -- operatörleri
     * doðrudan kullanýlamaz. */

    bugun++; // HATA

    return 0;
}