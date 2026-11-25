#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
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
