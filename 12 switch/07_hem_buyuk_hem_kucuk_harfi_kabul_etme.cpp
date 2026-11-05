#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char harfNotu;

    cout << "Harf notunuzu giriniz (A-F): ";
    cin >> harfNotu;

    /* Büyük ve küçük harflerin ayný iþlemi yapmasý için
     * iki ayrý case ayný komutlara yönlendirilebilir.
     * Örneðin kullanýcý A veya a girerse "Pekiyi" yazdýrýlýr. */

    switch (harfNotu)
    {
        case 'A':
        case 'a':
            cout << "Pekiyi" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Ýyi" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Orta" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Geçer" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Baþarýsýz" << endl;
            break;
        default:
            cout << "Geçersiz harf notu!" << endl;
            break;
    }

    return 0;
}
