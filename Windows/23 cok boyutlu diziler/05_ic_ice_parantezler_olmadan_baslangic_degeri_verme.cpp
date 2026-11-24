#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Başlangıç değerleri iç içe parantezler kullanılmadan, tek bir
     * küme parantezi içine de yazılabilir. Değerler satır satır
     * yerleştirilir: önce 0. satırın elemanlarına, sonra 1. satırın
     * elemanlarına verilir ve bu böyle devam eder. */
    int matris[3][2] = {1, 2, 3, 4, 5, 6};

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
     *
     * Bu tanımlama, int matris[3][2] = {{1, 2}, {3, 4}, {5, 6}};
     * tanımlamasıyla aynı sonucu verir. Çok boyutlu dizinin
     * elemanları bellekte satır satır art arda saklanır; değerler de
     * bu sırayla yerleştirilir.
     *
     * İç içe parantezler kullanılırsa hangi değerin hangi satıra ait
     * olduğu daha açık görülür. */

    return 0;
}
