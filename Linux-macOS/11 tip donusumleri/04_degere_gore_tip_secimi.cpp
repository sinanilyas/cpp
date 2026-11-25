#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Sabit sayının sırasıyla int, long ve long long tiplerine
     * sığıp sığmadığına bakılır. Bu tiplerden ilk hangisine sığarsa
     * sabit sayı o tipte oluşturulur. */

    // 5 int tipindedir, long long tipine dönüştürülür
    long long s1 = 5;

    /* 5000000000 int tipine sığmaz.
     * long 4 bayt ise (Windows) long tipine de sığmaz, long long tipindedir, dönüşüm yapılmaz.
     * long 8 bayt ise (Linux, macOS) long tipindedir, long long tipine dönüştürülür. */
    long long s2 = 5000000000;

    return 0;
}
