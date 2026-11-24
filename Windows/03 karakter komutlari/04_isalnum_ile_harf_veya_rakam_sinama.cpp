#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* isalnum komutu, karakterin harf ya da rakam olup olmadığını sınar. */
    bool sonuc1 = isalnum('R');
    bool sonuc2 = isalnum('7');
    bool sonuc3 = isalnum('%');

    cout << sonuc1 << endl; // 1
    cout << sonuc2 << endl; // 1
    cout << sonuc3 << endl; // 0

    return 0;
}
