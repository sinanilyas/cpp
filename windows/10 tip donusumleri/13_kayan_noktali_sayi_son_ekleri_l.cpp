#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ondalýklý sabit sayýlarýn long double tipinde oluþturulmasý için
     * l veya L son eki eklenir. */

    long double s1 = 5.2L;

    return 0;
}
