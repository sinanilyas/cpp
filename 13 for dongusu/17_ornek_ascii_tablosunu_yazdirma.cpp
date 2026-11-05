#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* ASCII tablosundaki 32-255 arasýndaki karakterler
     * ekranda görüntülenebilir karakterlerdir.
     * Döngü deðiþkeni char tipine dönüþtürülerek
     * sayýlarýn karþýlýk geldiði karakterler yazdýrýlabilir. */

    for (int i = 32; i <= 255; i++)
    {
        cout << i << " = " << static_cast<char>(i) << endl;
    }

    return 0;
}
