#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir tamsayý sabitinin long long olmasý için
     * sayýnýn sonuna ll veya LL son eki eklenir. */

    // Örtük int -> long long dönüþümü yapýlýr
    long long s1 = 5;

    // 5LL sayýsý baþtan long long tipinde oluþturulur, dönüþüm yapýlmaz
    long long s2 = 5LL;

    return 0;
}
