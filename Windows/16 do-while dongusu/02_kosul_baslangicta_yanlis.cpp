#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    /* do-while döngüsünde koşul en son kontrol edilir.
     * Bu nedenle koşul başlangıçta yanlış olsa bile
     * döngü gövdesi en az bir kez çalıştırılır. */

    do
    {
        cout << sayi << endl;
        sayi++;
    } while (sayi <= 5);

    return 0;
}
