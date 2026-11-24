#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* isupper komutu, karakterin büyük harf olup olmadığını sınar. */

    bool sonuc1 = isupper('F');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = isupper('f');
    cout << sonuc2 << endl; // 0

    bool sonuc3 = isupper('%');
    cout << sonuc3 << endl; // 0

    return 0;
}
