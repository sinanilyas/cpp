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

    /* Eleman sayýsý sabit olmalýdýr. Deðeri program çalýþýrken
     * belli olan bir deðiþkenle dizi tanýmlanmamalýdýr:
     *
     *     int n;
     *     cin >> n;
     *     int dizi[n];
     *
     * Standart C++ bu kullanýma izin vermez. Bazý derleyiciler
     * bu kodu derlese de bazýlarý hata verir. */

    return 0;
}
