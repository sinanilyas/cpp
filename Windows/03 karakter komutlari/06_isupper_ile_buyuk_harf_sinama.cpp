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
    bool sonuc2 = isupper('f');

    cout << sonuc1 << endl; // 1
    cout << sonuc2 << endl; // 0

    return 0;
}
