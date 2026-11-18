#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü koþulu hiçbir zaman yanlýþ olmuyorsa
     * sonsuz döngü oluþur.
     *
     * Bu örnekte i deðeri her tekrarda yeniden 1 yapýlýr.
     * Bu nedenle i <= 5 koþulu sürekli doðru kalýr. */

    for (int i = 1; i <= 5; i = 1)
    {
        cout << i << endl;
    }

    // Sonsuz döngü nedeniyle buraya ulaþýlamaz.
    cout << "Döngü sona erdi." << endl;

    return 0;
}
