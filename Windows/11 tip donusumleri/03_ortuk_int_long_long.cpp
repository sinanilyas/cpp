#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* 5 sabit sayısı int tipindedir.
     * Örtük olarak long long tipine dönüştürülür ve sayi değişkenine atanır. */
    long long sayi = 5;

    cout << sayi << endl; // 5

    return 0;
}
