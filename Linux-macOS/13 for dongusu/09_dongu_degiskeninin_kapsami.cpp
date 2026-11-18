#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for içinde tanımlanan döngü değişkeni
     * yalnızca döngü içerisinde kullanılabilir.
     * Döngü sona erdiğinde bu değişkenin kapsamı biter. */

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // HATA: i değişkeni döngü dışında kullanılamaz.
    cout << i << endl;

    return 0;
}
