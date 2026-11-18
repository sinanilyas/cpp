#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü içerisinde if kullanılarak yalnızca
     * belirli koşulları sağlayan değerler işlenebilir.
     * Bir sayının 2'ye bölümünden kalan 1 ise sayı tektir. */

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }

    // Ekrana sırasıyla 1, 3, 5, 7 ve 9 yazdırılır.

    return 0;
}
