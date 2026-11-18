#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir tamsayý sabitinin unsigned long olmasý için
     * sayýnýn sonuna uL veya Lu son eki eklenir.
     * u yerine U da yazýlabilir, büyük/küçük harf önemli deðildir.*/

    // Örtük int -> unsigned long dönüþümü yapýlýr
    unsigned long s1 = 5;

    // 5UL sayýsý baþtan unsigned long tipinde oluþturulur, dönüþüm yapýlmaz
    unsigned long s2 = 5UL;

    return 0;
}
