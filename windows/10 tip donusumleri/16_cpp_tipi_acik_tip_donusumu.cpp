#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* C++ tipi açık (explicit) tip dönüşümü */

    long long s1 = 5LL;

    int s2 = static_cast<int>(s1);  // Açık tip dönüşümü yapılır (C++ tipi açık dönüşüm)

    return 0;
}
