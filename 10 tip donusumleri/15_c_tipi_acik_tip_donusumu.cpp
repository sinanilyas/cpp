#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* C tipi açýk (explicit) tip dönüþümü */

    long long s1 = 5LL;

    int s2 = s1;       // Örtük tip dönüþümü yapýlýr
    int s3 = (int)s1;  // Açýk tip dönüþümü yapýlýr (C tipi açýk dönüþüm)

    /* Burada örtük dönüþüm zaten otomatik yapýlacaðý için açýk dönüþüme ihtiyaç yoktur,
     * fakat yine de bir tip dönüþüm yapýldýðý özellikle
     * gösterilmek isteniyorsa açýk dönüþüm yapýlabilir. */

    return 0;
}
