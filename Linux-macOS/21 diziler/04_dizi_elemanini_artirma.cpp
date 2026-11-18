#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int yas[3];

    yas[0] = 18;
    yas[1] = 20;
    yas[2] = 25;

    int a = 1;

    /* yas[a]++ ifadesinde ++ işleci dizi elemanına uygulanır.
     * Önce a indisli eleman bulunur, sonra bu elemanın değeri
     * 1 artırılır. a değişkeninin değeri değişmez. */
    yas[a]++;

    cout << yas[0] << " " << yas[1] << " " << yas[2] << endl; // 18 21 25
    cout << a << endl;                                         // 1

    /* yas[a]++ ifadesi yas[a] = yas[a] + 1 ifadesiyle eşdeğerdir. */

    return 0;
}
