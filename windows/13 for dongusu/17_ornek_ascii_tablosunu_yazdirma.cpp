#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* ASCII tablosundaki 32-255 arasındaki karakterler
     * ekranda görüntülenebilir karakterlerdir.
     * Döngü değişkeni char tipine dönüştürülerek
     * sayıların karşılık geldiği karakterler yazdırılabilir. */

    for (int i = 32; i <= 255; i++)
    {
        cout << i << " = " << static_cast<char>(i) << endl;
    }

    return 0;
}
