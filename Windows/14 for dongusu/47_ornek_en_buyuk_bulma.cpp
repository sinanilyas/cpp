#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü kullanılarak girilen sayılar karşılaştırılabilir.
     * İlk sayı en büyük kabul edilir.
     * Sonraki adımlarda daha büyük bir sayı girilirse
     * en büyük değer güncellenir. */

    int sayi, enBuyuk;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << ". sayıyı giriniz: ";
        cin >> sayi;

        if (i == 1) enBuyuk = sayi;
        else if (sayi > enBuyuk) enBuyuk = sayi;
    }

    cout << "En büyük sayı: " << enBuyuk << endl;

    return 0;
}
