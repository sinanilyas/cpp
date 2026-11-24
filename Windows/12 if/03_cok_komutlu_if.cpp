#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    // Koşul doğruysa süslü parantez içindeki tüm komutlar çalıştırılır.
    if (sayi > 0)
    {
        cout << "Sayı pozitiftir." << endl;
        cout << "Sayı sıfırdan büyüktür." << endl;
    }

    // Bu komut koşuldan bağımsız olarak çalıştırılır.
    cout << "Program sona erdi." << endl;

    return 0;
}
