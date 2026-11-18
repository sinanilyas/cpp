#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Sabit sayının sırasıyla int, long ve long long tiplerine
     * sığıp sığmadığına bakılır. Bu tiplerden ilk hangisine sığarsa
     * sabit sayı o tipte oluşturulur. */

    // 5 int tipindedir, long long tipine dönüştürülür
    long long s1 = 5;

    // Windows platformlarında 5000000000 long long tipindedir, dönüşüm yapılmaz
    long long s2 = 5000000000;

    return 0;
}
