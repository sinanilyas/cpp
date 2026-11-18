#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dizinin eleman say�s� i�in bir sabit tan�mlanabilir.
     * Dizi tan�mlamas�nda ve d�ng�lerde bu sabit kullan�l�r.
     * Eleman say�s� de�i�tirilmek istendi�inde yaln�zca sabitin
     * de�erini de�i�tirmek yeterlidir. */
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

    // Ekrana 0 1 4 9 16 yazd�r�l�r.

    return 0;
}
