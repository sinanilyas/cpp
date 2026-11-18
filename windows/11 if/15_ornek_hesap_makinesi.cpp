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

    cout << "Ýþlemi giriniz (+, -, *, /): ";
    cin >> islem;

    // Girilen iþlem karakterine göre uygun hesaplama yapýlýr.
    if (islem == '+')
        cout << "Sonuç: " << sayi1 + sayi2 << endl;
    else if (islem == '-')
        cout << "Sonuç: " << sayi1 - sayi2 << endl;
    else if (islem == '*')
        cout << "Sonuç: " << sayi1 * sayi2 << endl;
    else if (islem == '/')
    {
        // Ýkinci sayý sýfýrdan farklý ise
        if (sayi2 != 0.0)
            cout << "Sonuç: " << sayi1 / sayi2 << endl;
        else
            cout << "Hata: Sýfýra bölme yapýlamaz." << endl;
    }
    else
        cout << "Geçersiz iþlem!" << endl;

    return 0;
}
