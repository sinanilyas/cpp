#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü değişkeni aritmetik işlemlerde kullanılabilir.
     * Değişkenin değerini bir işlemde kullanmak
     * o değişkenin değerini değiştirmez. */

    for (int i = 0; i < 5; i++)
    {
        cout << i + 10 << endl;
    }

    // Ekrana sırasıyla 10, 11, 12, 13 ve 14 yazdırılır.

    return 0;
}
