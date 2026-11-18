#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Windows platformlarında 5000000000 sabit sayısı long long int tipindedir.
     * Hiçbir tip dönüşümü yapılmadan sayi değişkenine atanır. */
    long long sayi = 5000000000;

    cout << sayi << endl; // 5000000000

    return 0;
}
