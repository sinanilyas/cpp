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
    bool sonuc2 = isspace('\t');
    bool sonuc3 = isspace('\n');
    bool sonuc4 = isspace('\r');
    bool sonuc5 = isspace('F');

    cout << sonuc1 << endl; // 1
    cout << sonuc2 << endl; // 1
    cout << sonuc3 << endl; // 1
    cout << sonuc4 << endl; // 1
    cout << sonuc5 << endl; // 0

    return 0;
}
