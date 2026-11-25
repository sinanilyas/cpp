#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Bir tamsayı sabitinin long long olması için
     * sayının sonuna ll veya LL son eki eklenir. */

    // Örtük int -> long long dönüşümü yapılır
    long long s1 = 5;

    // 5LL sayısı baştan long long tipinde oluşturulur, dönüşüm yapılmaz
    long long s2 = 5LL;

    return 0;
}
