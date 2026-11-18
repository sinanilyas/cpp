#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Başlangıç değerleri verilirse köşeli parantez içine eleman
     * sayısı yazılmayabilir. Derleyici, verilen başlangıç değerlerini
     * sayarak eleman sayısını kendisi belirler. */
    int sayilar[] = {10, 20, 30, 40, 50, 60}; // 6 elemanlı dizi

    for (int i = 0; i < 6; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 30 40 50 60 yazdırılır.

    /* Hem eleman sayısı hem de başlangıç değerleri yazılmazsa
     * (int dizi[];) derleyici dizi için ne kadar yer ayıracağını
     * bilemez ve program derlenmez. */

    return 0;
}
