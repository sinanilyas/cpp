#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a = 10;
    int b = 20;

    // Bileşik atama operatörleri sağdan sola değerlendirilir.
    a += b += 5;

    cout << a << endl; // 35
    cout << b << endl; // 25

    /* Yukarıdaki işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * b += 5;
     * a += b;
     *
     * Önce b değişkenine 5 eklenir ve b = 25 olur.
     * Ardından a değişkenine b eklenir ve a = 35 olur.
     *
     * Bileşik atama operatörleri sağdan sola birleşir.
     */

    return 0;
}
