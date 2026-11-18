#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    gun bugun = car;

    /* enum tipli değişkenlerde ++ ve -- operatörleri
     * doğrudan kullanılamaz. */

    bugun++; // HATA

    return 0;
}