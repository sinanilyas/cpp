#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Baþlangýç deðerleri iç içe parantezler kullanýlmadan, tek bir
     * küme parantezi içine de yazýlabilir. Deðerler satýr satýr
     * yerleþtirilir: önce 0. satýrýn elemanlarýna, sonra 1. satýrýn
     * elemanlarýna verilir ve bu böyle devam eder. */
    int matris[3][2] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çýktýsý:
     * 1 2
     * 3 4
     * 5 6
     *
     * Bu tanýmlama, int matris[3][2] = {{1, 2}, {3, 4}, {5, 6}};
     * tanýmlamasýyla ayný sonucu verir. Çok boyutlu dizinin
     * elemanlarý bellekte satýr satýr art arda saklanýr; deðerler de
     * bu sýrayla yerleþtirilir.
     *
     * Ýç içe parantezler kullanýlýrsa hangi deðerin hangi satýra ait
     * olduðu daha açýk görülür. */

    return 0;
}
