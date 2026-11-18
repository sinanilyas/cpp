#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int yas[3];

    yas[0] = 18;
    yas[1] = 20;
    yas[2] = 25;

    int a = 1;

    /* yas[a++] ifadesinde ++ işleci a değişkenine uygulanır.
     * Sonek kullanıldığı için önce a'nın mevcut değeri indis olarak
     * kullanılır, ardından a 1 artırılır.
     * Dizi elemanlarının değeri değişmez. */
    cout << yas[a++] << endl; // 20
    cout << a << endl;        // 2
    cout << yas[a] << endl;   // 25

    cout << yas[0] << " " << yas[1] << " " << yas[2] << endl; // 18 20 25

    /* yas[++a] yazılsaydı önek kullanıldığı için önce a 1 artırılır,
     * sonra yeni indisteki elemana erişilirdi. */

    return 0;
}
