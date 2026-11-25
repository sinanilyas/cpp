#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    // Sayı pozitifse koşul true olur.
    if (sayi > 0) cout << "Sayı pozitiftir." << endl;

    // ! operatörü koşulun mantıksal tersini alır.
    if (!(sayi > 0)) cout << "Sayı pozitif değildir." << endl;

    return 0;
}
