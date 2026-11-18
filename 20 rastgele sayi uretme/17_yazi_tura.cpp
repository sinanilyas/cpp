#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* rand() % 2 ifadesi yalnýzca 0 veya 1 deðerini üretir.
     * Her ikisinin de gelme olasýlýðý %50'dir.
     * Bu sayede yazý-tura gibi iki sonuçlu olaylar taklit edilebilir. */

    if (rand() % 2 == 0)
        cout << "Yazý" << endl;
    else
        cout << "Tura" << endl;

    return 0;
}
