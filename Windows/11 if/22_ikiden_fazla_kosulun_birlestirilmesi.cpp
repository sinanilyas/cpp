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

    // Üç koşuldan en az biri doğruysa if komutu çalıştırılır.
    if (sayi == 1 || sayi == 2 || sayi == 3)
        cout << "Sayı 1, 2 veya 3'tür." << endl;
    else
        cout << "Sayı 1, 2 veya 3 değildir." << endl;

    return 0;
}
