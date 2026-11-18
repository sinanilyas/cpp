#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir tamsayı sabitinin unsigned long long olması için
     * sayının sonuna uLL veya LLu son eki eklenir.
     * u yerine U da yazılabilir, büyük/küçük harf önemli değildir.*/

    // Örtük int -> unsigned long long dönüşümü yapılır
    unsigned long long s1 = 5;

    // 5ULL sayısı baştan unsigned long long tipinde oluşturulur, dönüşüm yapılmaz
    unsigned long long s2 = 5ULL;

    return 0;
}
