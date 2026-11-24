#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // sayi değişkeninin değerine 5 eklenir
    sayi += 5;

    cout << sayi << endl; // 15

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi + 5;
     *
     * += operatörü, toplama ve atama işlemlerini
     * tek bir işlemde birleştirir.
     */

    return 0;
}
