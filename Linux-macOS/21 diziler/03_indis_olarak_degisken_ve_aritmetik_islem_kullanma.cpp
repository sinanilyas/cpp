#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayilar[5];

    /* İndis olarak yalnızca sabit bir sayı değil, tamsayı tipinde
     * bir değişken ya da sonucu tamsayı olan bir aritmetik işlem de
     * yazılabilir. Böylece dizinin elemanları döngü ile işlenebilir.
     *
     * İndisler 0'dan başladığı için döngü 0'dan başlar ve
     * eleman sayısından küçük olduğu sürece devam eder. */

    // Döngü değişkeni indis olarak kullanılıyor
    for (int i = 0; i < 5; i++)
    {
        sayilar[i] = (i + 1) * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 30 40 50 yazdırılır.

    int k = 2;

    cout << sayilar[k] << endl;     // 30
    cout << sayilar[k + 1] << endl; // 40
    cout << sayilar[k - 1] << endl; // 20
    cout << sayilar[k * 2] << endl; // 50

    /* Önce köşeli parantez içindeki işlem yapılır, sonra sonuçtaki
     * indise sahip elemana erişilir. sayilar[k + 1] ifadesi
     * sayilar[3] elemanını verir. k değişkeninin değeri değişmez.
     *
     * İndis tamsayı olmalıdır. sayilar[1.5] gibi ondalıklı bir indis
     * yazılırsa program derlenmez. */

    return 0;
}
