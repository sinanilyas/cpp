#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Çarpım tablosu oluşturulacak sayı kullanıcıdan alınarak
     * döngü içerisinde kullanılabilir. */

    int sayi;

    cout << "Çarpım tablosu oluşturulacak sayıyı giriniz: ";
    cin >> sayi;

    for (int i = 1; i <= 10; i++)
    {
        cout << sayi << " x " << i << " = " << sayi * i << endl;
    }

    return 0;
}
