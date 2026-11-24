#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 10;

    // Önce mevcut değer atanır, sonra 1 artırılır
    int sonuc = sayi++;

    cout << sayi << endl;  // 11
    cout << sonuc << endl; // 10

    /* sayi++ ifadesinde önce değişkenin mevcut değeri
     * kullanılır, ardından değişkenin değeri 1 artırılır.
     *
     * Yukarıdaki işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * int sonuc = sayi;
     * sayi++;
     */

    return 0;
}
