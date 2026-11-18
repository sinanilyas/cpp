#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Çok boyutlu dizilere tanımlama sırasında başlangıç değeri
     * verilebilir. Her satırın değerleri ayrı bir küme parantezi
     * içine yazılır. Satırların küme parantezleri de virgülle
     * ayrılarak dıştaki küme parantezinin içine yazılır.
     * {1, 2} 0. satırın, {3, 4} 1. satırın, {5, 6} 2. satırın
     * değerleridir. */
    int matris[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << matris[1][0] << endl; // 3
    cout << matris[2][1] << endl; // 6

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çıktısı:
     * 1 2
     * 3 4
     * 5 6
     */

    /* Satırlar alt alta yazılırsa matrisin görünümü daha kolay
     * anlaşılır:
     *
     *     int matris[3][2] =
     *     {
     *         {1, 2},
     *         {3, 4},
     *         {5, 6}
     *     };
     */

    return 0;
}
