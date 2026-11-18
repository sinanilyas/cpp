#include <iostream>
#include <windows.h>
using namespace std;

/* typedef ile enum tanımlama ve alternatif isim verme.
 * gun ismi, tanımlanan enum tipini ifade eder. */
typedef enum
{
    pts, sal, car, per, cum, cts, paz
} gun;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = car;

    cout << bugun << endl; // 2
    cout << static_cast<int>(bugun) << endl; // 2

    return 0;
}
