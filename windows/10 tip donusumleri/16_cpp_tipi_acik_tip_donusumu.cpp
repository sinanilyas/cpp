#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* C++ tipi açýk (explicit) tip dönüþümü */

    long long s1 = 5LL;

    int s2 = static_cast<int>(s1);  // Açýk tip dönüþümü yapýlýr (C++ tipi açýk dönüþüm)

    return 0;
}
