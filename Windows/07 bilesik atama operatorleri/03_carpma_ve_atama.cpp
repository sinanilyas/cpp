#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // sayi değişkeninin değeri 4 ile çarpılır
    sayi *= 4;

    cout << sayi << endl; // 40

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi * 4;
     *
     * *= operatörü, çarpma ve atama işlemlerini
     * tek bir işlemde birleştirir.
     */

    return 0;
}
