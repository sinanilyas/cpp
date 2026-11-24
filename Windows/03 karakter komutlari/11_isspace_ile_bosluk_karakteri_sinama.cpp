#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* isspace komutu, karakterin boşluk karakteri olup olmadığını sınar.
     * Boşluk, sekme ('\t'), yeni satır ('\n') ve satır başı ('\r') gibi
     * karakterler boşluk karakteri sayılır. */

    bool sonuc1 = isspace(' ');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = isspace('\t');
    cout << sonuc2 << endl; // 1

    bool sonuc3 = isspace('\n');
    cout << sonuc3 << endl; // 1

    bool sonuc4 = isspace('\r');
    cout << sonuc4 << endl; // 1

    bool sonuc5 = isspace('F');
    cout << sonuc5 << endl; // 0

    return 0;
}
