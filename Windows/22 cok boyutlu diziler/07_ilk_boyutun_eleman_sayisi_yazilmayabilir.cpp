#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Başlangıç değerleri verilirse ilk boyutun eleman sayısı
     * (satır sayısı) yazılmayabilir. Derleyici, verilen değerlere
     * bakarak satır sayısını kendisi belirler. */
    int matris[][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}}; // 4 satırlı matris

    cout << sizeof(matris) << endl; // Genellikle 32: 4 * 2 * 4 bayt

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çıktısı (sizeof satırından sonra):
     * 1 2
     * 3 4
     * 5 6
     * 7 8
     */

    /* Yalnızca ilk boyutun eleman sayısı yazılmayabilir. Diğer
     * boyutların eleman sayıları yazılmak zorundadır, çünkü derleyici
     * bir satırda kaç eleman olduğunu bilmelidir.
     *
     *     int matris[][] = {{1, 2}, {3, 4}};
     *     int matris[2][] = {{1, 2}, {3, 4}};
     *
     * Bu iki tanımlamada da program derlenmez. */

    return 0;
}
