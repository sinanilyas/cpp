#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double sayi1, sayi2;
    char islem;

    cout << "Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "İkinci sayıyı giriniz: ";
    cin >> sayi2;

    cout << "İşlemi giriniz (+, -, *, /): ";
    cin >> islem;

    // Girilen işlem karakterine göre uygun hesaplama yapılır.
    if (islem == '+')
        cout << "Sonuç: " << sayi1 + sayi2 << endl;
    else if (islem == '-')
        cout << "Sonuç: " << sayi1 - sayi2 << endl;
    else if (islem == '*')
        cout << "Sonuç: " << sayi1 * sayi2 << endl;
    else if (islem == '/')
    {
        // İkinci sayı sıfırdan farklı ise
        if (sayi2 != 0.0)
            cout << "Sonuç: " << sayi1 / sayi2 << endl;
        else
            cout << "Hata: Sıfıra bölme yapılamaz." << endl;
    }
    else
        cout << "Geçersiz işlem!" << endl;

    return 0;
}
