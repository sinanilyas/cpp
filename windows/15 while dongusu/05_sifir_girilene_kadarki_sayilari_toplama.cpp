#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
