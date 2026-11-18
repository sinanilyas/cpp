#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int degerler[] = {3, 7, 2, 5, 4};
    int elemanSayisi = sizeof(degerler) / sizeof(degerler[0]);

    /* Dış döngü dizinin elemanlarını sırayla dolaşır ve her eleman
     * için bir satır oluşturur. İç döngü, sıradaki elemanın değeri
     * kadar yan yana yıldız yazar. İç döngünün kaç kez döneceğini
     * dizi elemanının değeri belirler. */
    for (int i = 0; i < elemanSayisi; i++)
    {
        cout << degerler[i] << ": ";

        for (int j = 1; j <= degerler[i]; j++)
        {
            cout << "*";
        }

        // İç döngü tamamlandığında alt satıra geçilir.
        cout << endl;
    }

    /* Ekran çıktısı:
     * 3: ***
     * 7: *******
     * 2: **
     * 5: *****
     * 4: ****
     */

    return 0;
}
