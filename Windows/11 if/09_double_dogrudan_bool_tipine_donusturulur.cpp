#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double sayi = 0.01;

    // double doğrudan bool tipine dönüştürülür.
    if (sayi) cout << "Koşul doğrudur." << endl; // Çalışır.

    return 0;
}
