#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[5];

    /* Ýndis olarak yalnýzca sabit bir sayý deðil, tamsayý tipinde
     * bir deðiþken ya da sonucu tamsayý olan bir aritmetik iþlem de
     * yazýlabilir. Böylece dizinin elemanlarý döngü ile iþlenebilir.
     *
     * Ýndisler 0'dan baþladýðý için döngü 0'dan baþlar ve
     * eleman sayýsýndan küçük olduðu sürece devam eder. */

    // Döngü deðiþkeni indis olarak kullanýlýyor
    for (int i = 0; i < 5; i++)
    {
        sayilar[i] = (i + 1) * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 30 40 50 yazdýrýlýr.

    int k = 2;

    cout << sayilar[k] << endl;     // 30
    cout << sayilar[k + 1] << endl; // 40
    cout << sayilar[k - 1] << endl; // 20
    cout << sayilar[k * 2] << endl; // 50

    /* Önce köþeli parantez içindeki iþlem yapýlýr, sonra sonuçtaki
     * indise sahip elemana eriþilir. sayilar[k + 1] ifadesi
     * sayilar[3] elemanýný verir. k deðiþkeninin deðeri deðiþmez.
     *
     * Ýndis tamsayý olmalýdýr. sayilar[1.5] gibi ondalýklý bir indis
     * yazýlýrsa program derlenmez. */

    return 0;
}
