#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü değişkeninin değeri her tekrarda değişir.
     * Bu değişken döngü gövdesinde kullanılabilir. */

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // Ekrana sırasıyla 0, 1, 2, 3 ve 4 yazdırılır.

    return 0;
}
