#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* islower komutu, karakterin küçük harf olup olmadığını sınar. */

    bool sonuc1 = islower('f');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = islower('F');
    cout << sonuc2 << endl; // 0

    bool sonuc3 = islower('%');
    cout << sonuc3 << endl; // 0

    return 0;
}
