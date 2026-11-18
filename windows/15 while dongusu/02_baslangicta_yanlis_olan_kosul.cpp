#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayac = 15;

    // Koþul baþlangýçta yanlýþ olduðu için döngü hiç çalýþmaz.
    while (sayac <= 10)
    {
        cout << sayac << endl;
        sayac++;
    }

    cout << "Döngü sona erdi." << endl;

    return 0;
}
