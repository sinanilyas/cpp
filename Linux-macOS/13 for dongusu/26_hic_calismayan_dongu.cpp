#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü koşulu ilk kontrolde yanlışsa
     * döngü gövdesi bir kez bile çalıştırılmaz. */

    for (int i = 10; i < 5; i++)
    {
        cout << i << endl;
    }

    // Koşul başlangıçta yanlış olduğu için ekrana hiçbir şey yazdırılmaz.

    return 0;
}
