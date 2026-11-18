#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Kullanıcıdan alınan sayıların aritmetik ortalaması
     * hesaplanabilir. */

    int sayi, toplam = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << ". sayıyı giriniz: ";
        cin >> sayi;

        toplam += sayi;
    }

    // Bölme işleminde 5.0 kullanılarak sonucun double olması sağlanır.
    double ortalama = toplam / 5.0;

    cout << "Sayıların ortalaması: " << ortalama << endl;

    return 0;
}
