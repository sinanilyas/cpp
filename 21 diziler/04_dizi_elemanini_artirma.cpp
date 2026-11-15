#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int yas[3];

    yas[0] = 18;
    yas[1] = 20;
    yas[2] = 25;

    int a = 1;

    /* yas[a]++ ifadesinde ++ iþleci dizi elemanýna uygulanýr.
     * Önce a indisli eleman bulunur, sonra bu elemanýn deðeri
     * 1 artýrýlýr. a deðiþkeninin deðeri deðiþmez. */
    yas[a]++;

    cout << yas[0] << " " << yas[1] << " " << yas[2] << endl; // 18 21 25
    cout << a << endl;                                         // 1

    /* yas[a]++ ifadesi yas[a] = yas[a] + 1 ifadesiyle eþdeðerdir. */

    return 0;
}
