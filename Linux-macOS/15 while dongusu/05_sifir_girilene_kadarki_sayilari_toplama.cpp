#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi, toplam = 0;

    cout << "Bir sayı giriniz (Çıkış için 0): ";
    cin >> sayi;

    // Kullanıcı 0 girene kadar sayılar toplanır.
    while (sayi != 0)
    {
        toplam += sayi;

        cout << "Bir sayı giriniz (Çıkış için 0): ";
        cin >> sayi;
    }

    cout << "Toplam: " << toplam << endl;

    return 0;
}
