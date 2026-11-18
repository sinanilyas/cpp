#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Eksik başlangıç değeri verilirse, değer verilmeyen elemanlar
     * 0 olur. Ancak değerlerin hangi elemanlara verileceği, iç içe
     * parantez kullanılıp kullanılmamasına göre değişir.
     * Aşağıdaki iki matrise aynı değerler aynı sırayla veriliyor. */

    // Her satırın değerleri o satırın başından itibaren yerleştirilir.
    int parantezli[3][2] = {{1}, {2, 3}, {4}};

    // Değerler satır satır, art arda yerleştirilir.
    int parantezsiz[3][2] = {1, 2, 3, 4};

    cout << "parantezli:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << parantezli[i][j] << " ";
        }

        cout << endl;
    }

    cout << "parantezsiz:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << parantezsiz[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çıktısı:
     * parantezli:
     * 1 0
     * 2 3
     * 4 0
     * parantezsiz:
     * 1 2
     * 3 4
     * 0 0
     */

    /* Küme parantezleri boş bırakılırsa bütün elemanlar 0 olur:
     *
     *     int matris[3][2] = {};
     *
     * Bir satıra sütun sayısından fazla değer yazılırsa, örneğin
     * {{1, 2, 3}, {4, 5}} yazılırsa, program derlenmez. */

    return 0;
}
