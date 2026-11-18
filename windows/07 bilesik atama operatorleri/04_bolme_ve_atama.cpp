#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 15;

    // sayi değişkeninin değeri 2'ye bölünür
    sayi /= 2;

    cout << sayi << endl; // 7

    /* Yukarıdaki işlem aşağıdaki işlemle eşdeğerdir:
     *
     * sayi = sayi / 2;
     *
     * /= operatörü, bölme ve atama işlemlerini
     * tek bir işlemde birleştirir.
     *
     * Her iki işlenen de tamsayı olduğu için
     * bölme işleminin sonucu 7 olur.
     */

    return 0;
}
