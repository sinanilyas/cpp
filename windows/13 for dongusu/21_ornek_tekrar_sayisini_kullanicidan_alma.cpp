#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngünün tekrar sayısı sabit olmak zorunda değildir.
     * Kullanıcıdan alınan bir değer de döngü koşulunda
     * kullanılabilir. */

    int adet;

    cout << "Kaç kez Merhaba yazdırılsın? ";
    cin >> adet;

    for (int i = 0; i < adet; i++)
    {
        cout << i+1 << ". Merhaba" << endl;
    }

    return 0;
}
