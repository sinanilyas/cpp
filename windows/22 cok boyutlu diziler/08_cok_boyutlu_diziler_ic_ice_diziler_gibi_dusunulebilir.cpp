#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int matris[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    /* Ýki boyutlu bir dizi, elemanlarý dizi olan bir dizi gibi
     * düþünülebilir. matris 3 elemanlý bir dizidir ve her elemaný
     * 2 tane int deðerden oluþan bir dizidir:
     *
     *     matris[0] -> {1, 2}
     *     matris[1] -> {3, 4}
     *     matris[2] -> {5, 6}
     *
     * Ýç içe parantezlerle baþlangýç deðeri verilirken her iç küme
     * parantezi, bir satýr dizisinin baþlangýç deðerlerini içerir.
     *
     * matris[1][0] ifadesinde önce matris[1] ile 1 indisli satýr
     * dizisine, sonra [0] ile bu dizinin 0 indisli elemanýna eriþilir. */
    cout << matris[1][0] << endl; // 3

    cout << sizeof(matris) << endl;       // Genellikle 24: bütün matris
    cout << sizeof(matris[0]) << endl;    // Genellikle 8: bir satýr (2 int)
    cout << sizeof(matris[0][0]) << endl; // Genellikle 4: bir eleman (int)

    /* Tek boyutlu dizilerde olduðu gibi eleman sayýsý sizeof ile
     * bulunabilir. matris dizisinin eleman sayýsý satýr sayýsýný,
     * bir satýr dizisinin eleman sayýsý da sütun sayýsýný verir. */
    int satirSayisi = sizeof(matris) / sizeof(matris[0]);
    int sutunSayisi = sizeof(matris[0]) / sizeof(matris[0][0]);

    cout << satirSayisi << endl; // 3
    cout << sutunSayisi << endl; // 2

    for (int i = 0; i < satirSayisi; i++)
    {
        for (int j = 0; j < sutunSayisi; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    // Matris satýr satýr yazdýrýlýr: 1 2 / 3 4 / 5 6

    return 0;
}
