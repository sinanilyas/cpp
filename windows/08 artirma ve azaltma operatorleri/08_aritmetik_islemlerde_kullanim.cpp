#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi1 = 10;

    // Önce mevcut değer kullanılır, sonra 1 artırılır
    int sonuc = sayi1++ * 2;

    cout << sonuc << endl; // 20
    cout << sayi1 << endl;  // 11

    int sayi2 = 10;

    // Önce değer 1 azaltılır, sonra kullanılır
    sonuc = --sayi2 * 2;

    cout << sonuc << endl; // 18
    cout << sayi2 << endl;  // 9

    /* İlk işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * int sonuc = sayi1 * 2;
     * sayi1++;
     *
     * İkinci işlem aşağıdaki işlemlerle eşdeğerdir:
     *
     * sayi2--;
     * sonuc = sayi2 * 2;
     */

    return 0;
}
