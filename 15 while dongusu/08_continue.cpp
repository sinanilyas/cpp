#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayac = 0;

    while (sayac < 10)
    {
        sayac++;

        // Çift sayýlarda kalan iþlemler atlanýr.
        if (sayac % 2 == 0) continue;

        cout << sayac << endl;
    }

    return 0;
}
