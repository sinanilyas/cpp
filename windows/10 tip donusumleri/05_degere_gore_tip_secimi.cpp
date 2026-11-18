#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Sabit sayýnýn sýrasýyla int, long ve long long tiplerine
     * sýðýp sýðmadýðýna bakýlýr. Bu tiplerden ilk hangisine sýðarsa
     * sabit sayý o tipte oluþturulur. */

    // 5 int tipindedir, long long tipine dönüþtürülür
    long long s1 = 5;

    // Windows platformlarýnda 5000000000 long long tipindedir, dönüþüm yapýlmaz
    long long s2 = 5000000000;

    return 0;
}
