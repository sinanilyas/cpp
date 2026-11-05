#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi1 = 10;
    double sayi2 = 10.0;

    // sayi1 deðiþkeni int olduðu için
    // sonuç int tipine dönüþtürülür
    sayi1 += 2.7;

    // sayi2 deðiþkeni double olduðu için
    // sonuç double tipinde kalýr
    sayi2 += 2.7;

    cout << sayi1 << endl; // 12
    cout << sayi2 << endl; // 12.7

    /* Bileþik atama iþleminde sonuç, sol taraftaki
     * deðiþkenin veri tipine dönüþtürülür.
     *
     * sayi1 += 2.7 iþleminin sonucu 12.7'dir.
     * Ancak sayi1 int tipinde olduðu için
     * ondalýk kýsmý atýlarak 12 deðeri saklanýr.
     */

    return 0;
}
