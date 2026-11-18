#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double sayi1, sayi2;
    char islem;

    cout << "Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "İkinci sayıyı giriniz: ";
    cin >> sayi2;

    cout << "İşlem seçiniz (+, -, *, /): ";
    cin >> islem;

    /* Kullanıcının seçtiği işleme göre
     * iki sayı üzerinde hesaplama yapılır.
     * Örneğin kullanıcı * girerse sayılar çarpılır. */

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
                cout << "Sıfıra bölme yapılamaz!" << endl;
            break;
        default:
            cout << "Geçersiz işlem!" << endl;
            break;
    }

    return 0;
}
