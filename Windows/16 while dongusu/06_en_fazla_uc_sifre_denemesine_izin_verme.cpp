#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int DOGRU_SIFRE = 1234;
    int girilenSifre = 0;
    int denemeSayisi = 0;

    // Şifre doğru girilene veya 3 deneme yapılana kadar devam eder.
    while (girilenSifre != DOGRU_SIFRE && denemeSayisi < 3)
    {
        cout << "Şifreyi giriniz: ";
        cin >> girilenSifre;

        denemeSayisi++;
    }

    if (girilenSifre == DOGRU_SIFRE)
        cout << "Giriş başarılı." << endl;
    else
        cout << "Deneme hakkınız bitti." << endl;

    return 0;
}
