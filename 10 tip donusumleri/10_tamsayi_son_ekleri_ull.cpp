#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir tamsayý sabitinin unsigned long long olmasý için
     * sayýnýn sonuna uLL veya LLu son eki eklenir.
     * u yerine U da yazýlabilir, büyük/küçük harf önemli deðildir.*/

    // Örtük int -> unsigned long long dönüþümü yapýlýr
    unsigned long long s1 = 5;

    // 5ULL sayýsý baþtan unsigned long long tipinde oluþturulur, dönüþüm yapýlmaz
    unsigned long long s2 = 5ULL;

    return 0;
}
