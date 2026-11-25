#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* cout, ilk null karakterini gördüğü yerde yazdırmayı bırakır.
     * null karakteri dizinin ortasındaysa sonraki karakterler
     * yazdırılmaz. */
    char ad[] = {'A', '\0', 'i'};

    cout << ad << endl; // A

    return 0;
}
