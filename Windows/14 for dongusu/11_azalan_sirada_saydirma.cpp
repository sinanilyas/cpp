#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü değişkeninin değeri her tekrarda azaltılabilir.
     * Bunun için artış bölümünde i-- kullanılabilir.
     * Böylece döngü geriye doğru saydırılabilir. */

    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    // Ekrana sırasıyla 10, 9, 8, ... , 2 ve 1 yazdırılır.

    return 0;
}
