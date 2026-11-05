#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi, toplam = 0;

    cout << "Bir sayý giriniz (Çýkýþ için 0): ";
    cin >> sayi;

    // Kullanýcý 0 girene kadar sayýlar toplanýr.
    while (sayi != 0)
    {
        toplam += sayi;

        cout << "Bir sayý giriniz (Çýkýþ için 0): ";
        cin >> sayi;
    }

    cout << "Toplam: " << toplam << endl;

    return 0;
}
