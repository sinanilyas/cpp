#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi;

    cout << "Bir tamsayı giriniz (0-1): ";
    cin >> sayi;

    // Koşullardan en az biri doğruysa if bloğu çalıştırılır.
    if (sayi == 0 || sayi == 1)
        cout << "Sayı 0 veya 1'dir." << endl;
    else
        cout << "Sayı 0 veya 1 değildir." << endl;

    return 0;
}
