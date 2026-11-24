#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char ad1[] = "Ali";
    char ad2[] = "Ali";

    // MANTIK HATASI: Metinler karşılaştırılmaz
    cout << boolalpha << (ad1 == ad2) << endl; // false

    /* ad1 == ad2 şeklinde karşılaştırıldığında
     * metinler aynı olsa bile sonuç false olur.
     * Bunun nedeni ileride işaretçiler konusunda anlatılacaktır. */

    return 0;
}
