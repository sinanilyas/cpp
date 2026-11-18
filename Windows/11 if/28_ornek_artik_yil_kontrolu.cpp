#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir yılın artık yıl olması için aşağıdaki koşullardan
     * birini sağlaması gerekir:
     *     400'e tam bölünmesi.
     *     4'e tam bölünmesi ancak 100'e tam bölünmemesi.
     */

    int yil;

    cout << "Bir yıl giriniz: ";
    cin >> yil;

    // Yıl 400'e tam bölünüyorsa veya
    // 4'e tam bölünüp 100'e tam bölünmüyorsa artık yıldır.
    if (yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))
        cout << "Artık yıldır." << endl;
    else
        cout << "Artık yıl değildir." << endl;

    return 0;
}
