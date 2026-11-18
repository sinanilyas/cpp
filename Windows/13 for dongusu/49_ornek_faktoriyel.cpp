#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir sayının faktöriyeli, 1'den o sayıya kadar olan
     * pozitif tamsayıların çarpımıdır.
     * Örneğin 5! = 1 * 2 * 3 * 4 * 5 = 120
     * 0! = 1 olarak kabul edilir. */

    int sayi;
    unsigned long long faktoriyel = 1;

    cout << "Faktöriyeli hesaplanacak sayıyı giriniz (0-20): ";
    cin >> sayi;

    for (int i = 2; i <= sayi; i++) faktoriyel *= i;

    cout << sayi << "! = " << faktoriyel << endl;

    return 0;
}
