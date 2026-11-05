#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü koþulu ilk kontrolde yanlýþsa
     * döngü gövdesi bir kez bile çalýþtýrýlmaz. */

    for (int i = 10; i < 5; i++)
    {
        cout << i << endl;
    }

    // Koþul baþlangýçta yanlýþ olduðu için ekrana hiçbir þey yazdýrýlmaz.

    return 0;
}
