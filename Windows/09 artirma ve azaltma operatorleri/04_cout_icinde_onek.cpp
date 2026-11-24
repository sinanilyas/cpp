#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // Önce değer 1 artırılır, sonra yazdırılır
    cout << ++sayi << endl; // 11

    cout << sayi << endl;   // 11

    /* ++sayi ifadesinde önce değişkenin değeri
     * 1 artırılır, ardından yeni değeri kullanılır.
     *
     * Yukarıdaki işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * sayi++;
     * cout << sayi << endl;
     */

    return 0;
}
