#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // sayi değişkeninin değeri 1 azaltılır
    sayi--;

    cout << sayi << endl; // 9

    /* Yukarıdaki işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * sayi = sayi - 1;
     * sayi -= 1;
     *
     * -- operatörü, değişkenin değerini 1 azaltır.
     */

    return 0;
}
