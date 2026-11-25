#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for döngüsünün üç bölümü de boş bırakılabilir.
     * for (;;) ifadesi sonsuz döngü oluşturur.
     * Böyle bir döngü break komutuyla sonlandırılabilir. */

    int i = 1;

    for (;;)
    {
        cout << i << endl;

        if (i == 5) break;

        i++;
    }

    // Ekrana sırasıyla 1, 2, 3, 4 ve 5 yazdırılır.

    return 0;
}
