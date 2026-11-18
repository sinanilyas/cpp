#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    srand(time(0));

    /* rand() % 2 ifadesi yalnızca 0 veya 1 değerini üretir.
     * Her ikisinin de gelme olasılığı %50'dir.
     * Bu sayede yazı-tura gibi iki sonuçlu olaylar taklit edilebilir. */

    if (rand() % 2 == 0)
        cout << "Yazı" << endl;
    else
        cout << "Tura" << endl;

    return 0;
}
