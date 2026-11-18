#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Eksik baþlangýç deðeri verilirse, deðer verilmeyen elemanlar
     * 0 olur. Ancak deðerlerin hangi elemanlara verileceði, iç içe
     * parantez kullanýlýp kullanýlmamasýna göre deðiþir.
     * Aþaðýdaki iki matrise ayný deðerler ayný sýrayla veriliyor. */

    // Her satýrýn deðerleri o satýrýn baþýndan itibaren yerleþtirilir.
    int parantezli[3][2] = {{1}, {2, 3}, {4}};

    // Deðerler satýr satýr, art arda yerleþtirilir.
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

    /* Ekran çýktýsý:
     * parantezli:
     * 1 0
     * 2 3
     * 4 0
     * parantezsiz:
     * 1 2
     * 3 4
     * 0 0
     */

    /* Küme parantezleri boþ býrakýlýrsa bütün elemanlar 0 olur:
     *
     *     int matris[3][2] = {};
     *
     * Bir satýra sütun sayýsýndan fazla deðer yazýlýrsa, örneðin
     * {{1, 2, 3}, {4, 5}} yazýlýrsa, program derlenmez. */

    return 0;
}
