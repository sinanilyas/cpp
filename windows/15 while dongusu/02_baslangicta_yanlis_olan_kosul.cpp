#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
