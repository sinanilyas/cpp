#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* L son eki bir tamsayýnýn sonuna eklenirse long int,
     * bir ondalýklý sayýnýn sonuna eklenirse long double tipinde oluþturulur */

    long s1 = 5L; // long int
    long double s2 = 5.2L; // long double

    return 0;
}
