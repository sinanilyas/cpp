#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* C tipi açık (explicit) tip dönüşümü */

    long long s1 = 5LL;

    int s2 = s1;       // Örtük tip dönüşümü yapılır
    int s3 = (int)s1;  // Açık tip dönüşümü yapılır (C tipi açık dönüşüm)

    /* Burada örtük dönüşüm zaten otomatik yapılacağı için açık dönüşüme ihtiyaç yoktur,
     * fakat yine de bir tip dönüşüm yapıldığı özellikle
     * gösterilmek isteniyorsa açık dönüşüm yapılabilir. */

    return 0;
}
