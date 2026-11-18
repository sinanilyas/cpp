#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayac = 0;

    while (sayac < 10)
    {
        sayac++;

        // Çift sayılarda kalan işlemler atlanır.
        if (sayac % 2 == 0) continue;

        cout << sayac << endl;
    }

    return 0;
}
