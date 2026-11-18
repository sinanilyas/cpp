#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayac = 1;

    // Sayaç artırılmadığı için koşul sürekli doğru kalır.
    while (sayac <= 10)
    {
        cout << sayac << endl;
    }

    // Bu satıra hiçbir zaman ulaşılamaz.
    cout << "Döngü sona erdi." << endl;

    return 0;
}
