#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char karakter = 'A';

    cout << karakter << endl; // A
    cout << static_cast<int>(karakter) << endl; // 65

    /* Bazı durumlarda, istenilen sonucu elde etmek için
     * açık tip dönüşümü yapmak gerekir.
     * Örneğin cout, char tipindeki değerleri karakter olarak yazdırır.
     * Sayısal karşılığını yazdırmak için açık dönüşüm yapılabilir. */

    return 0;
}
