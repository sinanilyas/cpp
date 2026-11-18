#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir tamsayý sabitinin long olmasý için sayýnýn sonuna l veya L son eki eklenir.
      Ancak 1 ile karýþtýrýlma ihtimali yüksek olduðu için l yerine L önerilir. */

    // Örtük int -> long dönüþümü yapýlýr
    long s1 = 5;

    // 5L sayýsý baþtan long tipinde oluþturulur, dönüþüm yapýlmaz
    long s2 = 5L;

    return 0;
}
