#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü içerisinde kullanıcıdan tekrar tekrar değer alınabilir.
     * Bu örnekte kullanıcıdan alınan 5 tamsayının toplamı hesaplanır. */

    int sayi, toplam = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << ". sayıyı giriniz: ";
        cin >> sayi;

        toplam += sayi;
    }

    cout << "Sayıların toplamı: " << toplam << endl;

    return 0;
}
