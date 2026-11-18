#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayac = 1;

    while (sayac < 10)
    {
        // Sayaç artırılmadan continue yapıldığı için
        // sayi=2 olduğunda sonsuz döngüye girer
        if (sayac % 2 == 0) continue;

        cout << sayac << endl;

        sayac++;
    }

    return 0;
}
