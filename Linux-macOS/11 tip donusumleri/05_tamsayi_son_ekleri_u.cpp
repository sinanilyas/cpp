#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Bir tamsayı sabitinin unsigned olması için
     * sayının sonuna u veya U son eki eklenir. */

    // Örtük int (signed int) -> unsigned int dönüşümü yapılır
    unsigned int s1 = 5;

    // 5u sayısı baştan unsigned int tipinde oluşturulur, dönüşüm yapılmaz
    unsigned int s2 = 5u;

    return 0;
}
