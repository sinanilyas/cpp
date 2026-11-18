#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi1 = 10;
    double sayi2 = 10.0;

    // sayi1 değişkeni int olduğu için
    // sonuç int tipine dönüştürülür
    sayi1 += 2.7;

    // sayi2 değişkeni double olduğu için
    // sonuç double tipinde kalır
    sayi2 += 2.7;

    cout << sayi1 << endl; // 12
    cout << sayi2 << endl; // 12.7

    /* Bileşik atama işleminde sonuç, sol taraftaki
     * değişkenin veri tipine dönüştürülür.
     *
     * sayi1 += 2.7 işleminin sonucu 12.7'dir.
     * Ancak sayi1 int tipinde olduğu için
     * ondalık kısmı atılarak 12 değeri saklanır.
     */

    return 0;
}
