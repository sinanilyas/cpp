#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char harfNotu;

    cout << "Harf notunuzu giriniz (A-F): ";
    cin >> harfNotu;

    /* switch yalnýzca tamsayýlarla deðil,
     * char tipindeki deðerlerle de kullanýlabilir.
     * Örneðin kullanýcý B girerse "Ýyi" yazdýrýlýr. */

    switch (harfNotu)
    {
        case 'A':
            cout << "Pekiyi" << endl;
            break;
        case 'B':
            cout << "Ýyi" << endl;
            break;
        case 'C':
            cout << "Orta" << endl;
            break;
        case 'D':
            cout << "Geçer" << endl;
            break;
        case 'F':
            cout << "Baþarýsýz" << endl;
            break;
        default:
            cout << "Geçersiz harf notu!" << endl;
            break;
    }

    return 0;
}
