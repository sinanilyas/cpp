#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // Sayý pozitifse koþul true olur.
    if (sayi > 0) cout << "Sayý pozitiftir." << endl;

    // ! operatörü koþulun mantýksal tersini alýr.
    if (!(sayi > 0)) cout << "Sayý pozitif deðildir." << endl;

    return 0;
}
