#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int matris[3][2];

    /* Elemanlara, her boyut için ayrý köþeli parantez içine yazýlan
     * indislerle eriþilir: matris[satir][sutun]
     * Ýlk indis satýrý, ikinci indis sütunu gösterir. Ýki indis de
     * 0'dan baþlar.
     *
     *              0. sütun       1. sütun
     *  0. satýr    matris[0][0]   matris[0][1]
     *  1. satýr    matris[1][0]   matris[1][1]
     *  2. satýr    matris[2][0]   matris[2][1]
     *
     * Tanýmlamadaki [3][2] satýr ve sütun sayýsýný gösterir. Son
     * eleman matris[2][1]'dir, matris[3][2] diye bir eleman yoktur. */

    matris[0][0] = 10;
    matris[0][1] = 20;
    matris[1][0] = 30;
    matris[1][1] = 40;
    matris[2][0] = 50;
    matris[2][1] = 60;

    cout << matris[0][1] << endl; // 20
    cout << matris[2][0] << endl; // 50

    // Elemanlar sýradan deðiþkenler gibi kullanýlabilir.
    matris[1][1] = matris[0][0] + matris[2][1];
    matris[2][0]++;

    cout << matris[1][1] << endl; // 70
    cout << matris[2][0] << endl; // 51

    /* Her indis ayrý köþeli parantez içine yazýlýr.
     * matris[1, 0] yazýmý matris[1][0] anlamýna gelmez. */

    return 0;
}
