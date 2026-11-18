#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    if (sayi > 0)
        cout << "Sayı pozitiftir." << endl;
    else
    {
        // İlk koşul yanlışsa ikinci koşul değerlendirilir.
        if (sayi < 0)
            cout << "Sayı negatiftir." << endl;
        else
            cout << "Sayı sıfırdır." << endl;
    }

    return 0;
}
