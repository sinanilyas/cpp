#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir tamsayı sabitinin long long olması için
     * sayının sonuna ll veya LL son eki eklenir. */

    // Örtük int -> long long dönüşümü yapılır
    long long s1 = 5;

    // 5LL sayısı baştan long long tipinde oluşturulur, dönüşüm yapılmaz
    long long s2 = 5LL;

    return 0;
}
