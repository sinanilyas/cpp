#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double sayi = 5.7;

    // Ondalıklı sayı 1 artırılır
    sayi++;

    cout << sayi << endl; // 6.7

    // Ondalıklı sayı 1 azaltılır
    sayi--;

    cout << sayi << endl; // 5.7

    /* ++ ve -- operatörleri yalnızca tamsayılarda değil,
     * ondalıklı sayılarda da kullanılabilir.
     */

    return 0;
}
