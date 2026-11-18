#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir tamsayı sabitinin unsigned long olması için
     * sayının sonuna uL veya Lu son eki eklenir.
     * u yerine U da yazılabilir, büyük/küçük harf önemli değildir.*/

    // Örtük int -> unsigned long dönüşümü yapılır
    unsigned long s1 = 5;

    // 5UL sayısı baştan unsigned long tipinde oluşturulur, dönüşüm yapılmaz
    unsigned long s2 = 5UL;

    return 0;
}
