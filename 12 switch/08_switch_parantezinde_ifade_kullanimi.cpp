#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    /* switch içerisinde yalnýzca deðiþkenler deðil,
     * sonuçlarý tamsayý olan ifadeler de kullanýlabilir.
     * Örneðin kullanýcý 14 girerse 14 % 3 = 2 olduðundan
     * case 2 çalýþtýrýlýr. */

    switch (sayi % 3)
    {
        case 0:
            cout << "Sayý 3'e tam bölünür." << endl;
            break;
        case 1:
            cout << "Bölümden kalan 1'dir." << endl;
            break;
        case 2:
            cout << "Bölümden kalan 2'dir." << endl;
            break;
    }

    return 0;
}
