#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 0;

    /* HATALI KULLANIM:
     * Önce atama yapılır, sonra sayi değişkenin değerinin
     * true olup olmadığı kontrol edilir. */

    if (sayi = 0)
        cout << "Koşul doğrudur." << endl;
    else
        cout << "Koşul yanlıştır." << endl;

    cout << "Sayı: " << sayi << endl; // 0

    return 0;
}
