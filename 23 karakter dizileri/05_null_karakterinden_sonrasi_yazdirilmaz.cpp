#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* cout, ilk null karakterini gördüðü yerde yazdýrmayý býrakýr.
     * null karakteri dizinin ortasýndaysa sonraki karakterler
     * yazdýrýlmaz. */
    char ad[] = {'A', '\0', 'i'};

    cout << ad << endl; // A

    // Yazdýrýlmayan karakterler dizide durmaya devam eder.
    cout << ad[2] << endl; // i

    /* Son eleman null karakteri olmasa da cout dizinin dýþýna taþmaz,
     * çünkü daha önce bir null karakteri vardýr. */

    return 0;
}
