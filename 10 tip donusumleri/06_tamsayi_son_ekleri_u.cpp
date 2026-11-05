#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir tamsayý sabitinin unsigned olmasý için
     * sayýnýn sonuna u veya U son eki eklenir. */

    // Örtük int (signed int) -> unsigned int dönüþümü yapýlýr
    unsigned int s1 = 5;

    // 5u sayýsý baþtan unsigned int tipinde oluþturulur, dönüþüm yapýlmaz
    unsigned int s2 = 5u;

    return 0;
}
