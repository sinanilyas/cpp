#include <iostream>
using namespace std;

/* typedef ile enum tanýmlama ve alternatif isim verme.
 * gun ismi, tanýmlanan enum tipini ifade eder. */
typedef enum
{
    pts, sal, car, per, cum, cts, paz
} gun;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    cout << bugun << endl; // 2
    cout << static_cast<int>(bugun) << endl; // 2

    return 0;
}
