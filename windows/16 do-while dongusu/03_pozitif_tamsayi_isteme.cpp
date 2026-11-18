#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi;

    /* Kullanıcı pozitif bir tamsayı girene kadar
     * sayı istemeye devam edilir.
     * İlk giriş, koşul kontrol edilmeden yapılır. */

    do
    {
        cout << "Pozitif bir tamsayı giriniz: ";
        cin >> sayi;
    } while (sayi <= 0);

    cout << "Girdiğiniz sayı: " << sayi << endl;

    return 0;
}
