#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* L son eki bir tamsayının sonuna eklenirse long int,
     * bir ondalıklı sayının sonuna eklenirse long double tipinde oluşturulur */

    long s1 = 5L; // long int
    long double s2 = 5.2L; // long double

    return 0;
}
