#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int matris[3][2];

    /* Elemanlara, her boyut için ayrı köşeli parantez içine yazılan
     * indislerle erişilir: matris[satir][sutun]
     * İlk indis satırı, ikinci indis sütunu gösterir. İki indis de
     * 0'dan başlar.
     *
     *              0. sütun       1. sütun
     *  0. satır    matris[0][0]   matris[0][1]
     *  1. satır    matris[1][0]   matris[1][1]
     *  2. satır    matris[2][0]   matris[2][1]
     *
     * Tanımlamadaki [3][2] satır ve sütun sayısını gösterir. Son
     * eleman matris[2][1]'dir, matris[3][2] diye bir eleman yoktur. */

    matris[0][0] = 10;
    matris[0][1] = 20;
    matris[1][0] = 30;
    matris[1][1] = 40;
    matris[2][0] = 50;
    matris[2][1] = 60;

    cout << matris[0][1] << endl; // 20
    cout << matris[2][0] << endl; // 50

    // Elemanlar sıradan değişkenler gibi kullanılabilir.
    matris[1][1] = matris[0][0] + matris[2][1];
    matris[2][0]++;

    cout << matris[1][1] << endl; // 70
    cout << matris[2][0] << endl; // 51

    /* Her indis ayrı köşeli parantez içine yazılır.
     * matris[1, 0] yazımı matris[1][0] anlamına gelmez. */

    return 0;
}
