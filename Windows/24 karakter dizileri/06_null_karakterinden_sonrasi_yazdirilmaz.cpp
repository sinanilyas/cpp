#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* cout, ilk null karakterini gördüğü yerde yazdırmayı bırakır.
     * null karakteri dizinin ortasındaysa sonraki karakterler
     * yazdırılmaz. */
    char ad[] = {'A', '\0', 'i'};

    cout << ad << endl; // A

    return 0;
}
