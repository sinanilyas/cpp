#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    for (int i = 0; i < 5; i++)
    {
        cout << "Merhaba" << endl;
    }

    /* int i = 0 -> i deðiþkeni tanýmlanýr ve 0 deðeri atanýr.
     * i < 5     -> i deðeri 5'ten küçük olduðu sürece döngü çalýþýr.
     * i++       -> Her tekrardan sonra i deðeri 1 artýrýlýr.
     *
     * Döngü gövdesi i = 0, 1, 2, 3 ve 4 için çalýþýr.
     * Böylece "Merhaba" metni ekrana 5 kez yazdýrýlýr.
     * i deðeri 5 olduðunda koþul yanlýþ olur ve döngü sona erer.
     */

    return 0;
}
