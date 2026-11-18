#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dizinin eleman sayýsý için bir sabit tanýmlanabilir.
     * Dizi tanýmlamasýnda ve döngülerde bu sabit kullanýlýr.
     * Eleman sayýsý deðiþtirilmek istendiðinde yalnýzca sabitin
     * deðerini deðiþtirmek yeterlidir. */
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

    // Ekrana 0 1 4 9 16 yazdýrýlýr.

    return 0;
}
