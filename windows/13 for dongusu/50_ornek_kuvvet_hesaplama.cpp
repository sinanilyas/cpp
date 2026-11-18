#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir sayýnýn pozitif tamsayý kuvveti, sayýnýn
     * kendisiyle tekrar tekrar çarpýlmasýyla hesaplanabilir.
     * Örneðin 2 üssü 4 = 2 * 2 * 2 * 2 = 16
     * Herhangi bir sayýnýn 0. kuvveti 1'dir (0 üssü 0 hariç). */

    double taban, sonuc = 1;
    int us;

    cout << "Taban deðerini giriniz: ";
    cin >> taban;

    cout << "Üs deðerini giriniz (0 veya pozitif): ";
    cin >> us;

    for (int i = 1; i <= us; i++)
    {
        sonuc *= taban;
    }

    cout << "Sonuç: " << sonuc << endl;

    return 0;
}
