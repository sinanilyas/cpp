#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayac = 1;

    // Koşul doğru olduğu sürece döngü tekrarlanır.
    while (sayac <= 10)
    {
        cout << sayac << endl;
        sayac++; // Sayaç artırılmazsa döngü sonsuza kadar devam eder.
    }

    return 0;
}
