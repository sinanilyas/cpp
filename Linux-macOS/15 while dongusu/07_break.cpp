#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayac = 1;

    while (sayac <= 10)
    {
        // Sayaç 6 olduğunda döngü hemen sona erer.
        if (sayac == 6) break;

        cout << sayac << endl;
        sayac++;
    }

    cout << "Döngü sona erdi." << endl;

    return 0;
}
