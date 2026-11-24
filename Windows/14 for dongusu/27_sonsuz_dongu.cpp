#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü koşulu hiçbir zaman yanlış olmuyorsa
     * sonsuz döngü oluşur.
     *
     * Bu örnekte i değeri her tekrarda yeniden 1 yapılır.
     * Bu nedenle i <= 5 koşulu sürekli doğru kalır. */

    for (int i = 1; i <= 5; i = 1)
    {
        cout << i << endl;
    }

    // Sonsuz döngü nedeniyle buraya ulaşılamaz.
    cout << "Döngü sona erdi." << endl;

    return 0;
}
