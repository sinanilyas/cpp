#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Ondalıklı sabit sayıların long double tipinde oluşturulması için
     * l veya L son eki eklenir. */

    long double s1 = 5.2L;

    return 0;
}
