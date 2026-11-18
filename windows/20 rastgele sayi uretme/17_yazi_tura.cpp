#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
