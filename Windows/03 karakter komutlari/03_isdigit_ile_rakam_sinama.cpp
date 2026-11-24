#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* isdigit komutu, karakterin rakam (0-9) olup olmadığını sınar. */

    bool sonuc1 = isdigit('7');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = isdigit('R');
    cout << sonuc2 << endl; // 0

    bool sonuc3 = isdigit('%');
    cout << sonuc3 << endl; // 0

    return 0;
}
