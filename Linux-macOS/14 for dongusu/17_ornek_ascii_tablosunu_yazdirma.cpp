#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* ASCII tablosunda 0-127 arasındaki karakterler bulunur.
     * Bunlardan 0-31 ve 127 kontrol karakterleridir ve ekranda görünmez.
     * 32-126 arasındaki karakterler ekranda görüntülenebilir.
     * Döngü değişkeni char tipine dönüştürülerek
     * sayıların karşılık geldiği karakterler yazdırılabilir. */

    for (int i = 32; i <= 126; i++)
    {
        cout << i << " = " << static_cast<char>(i) << endl;
    }

    return 0;
}
