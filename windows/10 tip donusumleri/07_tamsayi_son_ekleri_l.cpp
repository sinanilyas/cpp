#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir tamsayı sabitinin long olması için sayının sonuna l veya L son eki eklenir.
      Ancak 1 ile karıştırılma ihtimali yüksek olduğu için l yerine L önerilir. */

    // Örtük int -> long dönüşümü yapılır
    long s1 = 5;

    // 5L sayısı baştan long tipinde oluşturulur, dönüşüm yapılmaz
    long s2 = 5L;

    return 0;
}
