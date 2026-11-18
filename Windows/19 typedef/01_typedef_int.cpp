#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* typedef, mevcut bir veri tipine alternatif bir isim vermek için kullanılır.
     * Aşağıdaki tanımlama, int veri tipine tamsayi ismini verir.
     * typedef yeni bir veri tipi oluşturmaz. */

    typedef int tamsayi;

    int sayi1 = 10;
    tamsayi sayi2 = 20;

    cout << sayi1 << endl; // 10
    cout << sayi2 << endl; // 20

    return 0;
}
