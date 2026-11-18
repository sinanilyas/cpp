#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayac = 15;

    // Koşul başlangıçta yanlış olduğu için döngü hiç çalışmaz.
    while (sayac <= 10)
    {
        cout << sayac << endl;
        sayac++;
    }

    cout << "Döngü sona erdi." << endl;

    return 0;
}
