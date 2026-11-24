#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char karakter = 'A';

    // Karakterin kod değeri 1 artırılır
    karakter++;

    cout << karakter << endl; // B

    /* ++ ve -- operatörleri char tipindeki
     * değişkenlerle de kullanılabilir.
     *
     * 'A' karakterinin ASCII kodu 65,
     * 'B' karakterinin ASCII kodu 66'dır.
     *
     * Artırma ve azaltma işlemleri karakterlerin
     * sayısal kod değerleri üzerinde gerçekleştirilir.
     */

    return 0;
}
