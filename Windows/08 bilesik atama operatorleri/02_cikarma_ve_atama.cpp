#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // sayi değişkeninin değerinden 3 çıkarılır
    sayi -= 3;

    cout << sayi << endl; // 7

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi - 3;
     *
     * -= operatörü, çıkarma ve atama işlemlerini
     * tek bir işlemde birleştirir.
     */

    return 0;
}
