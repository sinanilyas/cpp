#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir sayýnýn faktöriyeli, 1'den o sayýya kadar olan
     * pozitif tamsayýlarýn çarpýmýdýr.
     * Örneðin 5! = 1 * 2 * 3 * 4 * 5 = 120
     * 0! = 1 olarak kabul edilir. */

    int sayi;
    unsigned long long faktoriyel = 1;

    cout << "Faktöriyeli hesaplanacak sayýyý giriniz (0-20): ";
    cin >> sayi;

    for (int i = 2; i <= sayi; i++) faktoriyel *= i;

    cout << sayi << "! = " << faktoriyel << endl;

    return 0;
}
