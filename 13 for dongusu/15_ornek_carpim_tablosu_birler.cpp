#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeni kullanýlarak çarpým tablosu
     * gibi düzenli çýktýlar oluþturulabilir. */

    for (int i = 1; i <= 10; i++)
    {
        cout << "1 x " << i << " = " << 1 * i << endl;
    }

    return 0;
}
