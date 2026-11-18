#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 0;

    // Pozitif bir sayı girilene kadar giriş istenir.
    while (sayi <= 0)
    {
        cout << "Pozitif bir sayı giriniz: ";
        cin >> sayi;
    }

    cout << "Girdiğiniz sayı: " << sayi << endl;

    return 0;
}
