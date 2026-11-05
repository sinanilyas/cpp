#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int DOGRU_SIFRE = 1234;
    int girilenSifre = 0;
    int denemeSayisi = 0;

    // Þifre doðru girilene veya 3 deneme yapýlana kadar devam eder.
    while (girilenSifre != DOGRU_SIFRE && denemeSayisi < 3)
    {
        cout << "Þifreyi giriniz: ";
        cin >> girilenSifre;

        denemeSayisi++;
    }

    if (girilenSifre == DOGRU_SIFRE)
        cout << "Giriþ baþarýlý." << endl;
    else
        cout << "Deneme hakkýnýz bitti." << endl;

    return 0;
}
