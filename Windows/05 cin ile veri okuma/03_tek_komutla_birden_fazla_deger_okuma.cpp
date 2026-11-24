#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi1, sayi2;

    cout << "İki sayı giriniz: " << endl;
    cin >> sayi1 >> sayi2;

    cout << "Toplam: " << sayi1 + sayi2 << endl;

    return 0;
}
