#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    double sayi1, sayi2;
    char islem;

    cout << "Birinci sayýyý giriniz: ";
    cin >> sayi1;

    cout << "Ýkinci sayýyý giriniz: ";
    cin >> sayi2;

    cout << "Ýþlem seçiniz (+, -, *, /): ";
    cin >> islem;

    /* Kullanýcýnýn seçtiði iþleme göre
     * iki sayý üzerinde hesaplama yapýlýr.
     * Örneðin kullanýcý * girerse sayýlar çarpýlýr. */

    switch (islem)
    {
        case '+':
            cout << "Sonuç: " << sayi1 + sayi2 << endl;
            break;
        case '-':
            cout << "Sonuç: " << sayi1 - sayi2 << endl;
            break;
        case '*':
            cout << "Sonuç: " << sayi1 * sayi2 << endl;
            break;
        case '/':
            if (sayi2 != 0.0)
                cout << "Sonuç: " << sayi1 / sayi2 << endl;
            else
                cout << "Sýfýra bölme yapýlamaz!" << endl;
            break;
        default:
            cout << "Geçersiz iþlem!" << endl;
            break;
    }

    return 0;
}
