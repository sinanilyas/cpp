#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dizinin eleman sayısı için bir sabit tanımlanabilir.
     * Dizi tanımlamasında ve döngülerde bu sabit kullanılır.
     * Eleman sayısı değiştirilmek istendiğinde yalnızca sabitin
     * değerini değiştirmek yeterlidir. */
    const int BOYUT = 5;

    int kareler[BOYUT];

    for (int i = 0; i < BOYUT; i++)
    {
        kareler[i] = i * i;
    }

    for (int i = 0; i < BOYUT; i++)
    {
        cout << kareler[i] << " ";
    }
    cout << endl;

    // Ekrana 0 1 4 9 16 yazdırılır.

    return 0;
}
