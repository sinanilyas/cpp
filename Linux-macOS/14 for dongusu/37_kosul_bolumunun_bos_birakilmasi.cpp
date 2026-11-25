#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for döngüsünün koşul bölümü boş bırakılabilir.
     * Bu durumda koşul her zaman doğru kabul edilir.
     * Döngü başka bir şekilde sonlandırılmazsa sonsuza kadar çalışır. */

    for (int i = 1; ; i++)
    {
        if (i > 5) break;

        cout << i << endl;
    }

    // Ekrana sırasıyla 1, 2, 3, 4 ve 5 yazdırılır.

    return 0;
}
