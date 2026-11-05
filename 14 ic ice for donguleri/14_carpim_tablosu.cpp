#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç içe döngüler kullanýlarak 1'den 10'a kadar
     * tüm sayýlarýn çarpým tablolarý oluþturulabilir.
     * Dýþ döngü çarpým tablosu oluþturulacak sayýyý,
     * iç döngü ise çarpýlacaðý sayýlarý belirler. */

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;
    }

    return 0;
}
