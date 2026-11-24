#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* iscntrl komutu, karakterin kontrol karakteri olup olmadığını sınar.
     * Kontrol karakterleri ekranda görünmeyen, ASCII kodu 0-31 arasında
     * ya da 127 olan karakterlerdir. '\a' (7), '\b' (8), '\t' (9) ve
     * '\n' (10) birer kontrol karakteridir. */
    bool sonuc1 = iscntrl('\a');
    bool sonuc2 = iscntrl('\b');
    bool sonuc3 = iscntrl('\t');
    bool sonuc4 = iscntrl('\n');
    bool sonuc5 = iscntrl('F');

    cout << sonuc1 << endl; // 1
    cout << sonuc2 << endl; // 1
    cout << sonuc3 << endl; // 1
    cout << sonuc4 << endl; // 1
    cout << sonuc5 << endl; // 0

    return 0;
}
