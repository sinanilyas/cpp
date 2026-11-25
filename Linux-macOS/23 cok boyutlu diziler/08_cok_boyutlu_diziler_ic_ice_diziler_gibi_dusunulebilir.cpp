#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int matris[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    /* İki boyutlu bir dizi, elemanları dizi olan bir dizi gibi
     * düşünülebilir. matris 3 elemanlı bir dizidir ve her elemanı
     * 2 tane int değerden oluşan bir dizidir:
     *
     *     matris[0] -> {1, 2}
     *     matris[1] -> {3, 4}
     *     matris[2] -> {5, 6}
     *
     * İç içe parantezlerle başlangıç değeri verilirken her iç küme
     * parantezi, bir satır dizisinin başlangıç değerlerini içerir.
     *
     * matris[1][0] ifadesinde önce matris[1] ile 1 indisli satır
     * dizisine, sonra [0] ile bu dizinin 0 indisli elemanına erişilir. */
    cout << matris[1][0] << endl; // 3

    cout << sizeof(matris) << endl;       // Genellikle 24: bütün matris
    cout << sizeof(matris[0]) << endl;    // Genellikle 8: bir satır (2 int)
    cout << sizeof(matris[0][0]) << endl; // Genellikle 4: bir eleman (int)

    /* Tek boyutlu dizilerde olduğu gibi eleman sayısı sizeof ile
     * bulunabilir. matris dizisinin eleman sayısı satır sayısını,
     * bir satır dizisinin eleman sayısı da sütun sayısını verir. */
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

    // Matris satır satır yazdırılır: 1 2 / 3 4 / 5 6

    return 0;
}
