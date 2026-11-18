#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    /* case etiketlerinde yalnýzca doðrudan yazýlmýþ
     * sabit deðerler deðil, sabit ifadeler de kullanýlabilir.
     * Bu ifadeler derleme zamanýnda hesaplanýr.
     * Örneðin case 2+3 yazmakla case 5 yazmak ayný anlama gelir. */

    switch (sayi)
    {
        case 2 + 3:
            cout << "Sayý 5'tir." << endl;
            break;
        case 2 * 3:
            cout << "Sayý 6'dýr." << endl;
            break;
        case 10 - 3:
            cout << "Sayý 7'dir." << endl;
            break;
        default:
            cout << "Sayý 5, 6 veya 7 deðildir." << endl;
            break;
    }

    return 0;
}
