#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü koşulu ilk kontrolde yanlışsa
     * döngü gövdesi bir kez bile çalıştırılmaz. */

    for (int i = 10; i < 5; i++)
    {
        cout << i << endl;
    }

    // Koşul başlangıçta yanlış olduğu için ekrana hiçbir şey yazdırılmaz.

    return 0;
}
