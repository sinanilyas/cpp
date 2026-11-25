#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* iscntrl komutu, karakterin kontrol karakteri olup olmadığını sınar.
     * Kontrol karakterleri ekranda görünmeyen, ASCII kodu 0-31 arasında
     * ya da 127 olan karakterlerdir. '\a' (7), '\b' (8), '\t' (9) ve
     * '\n' (10) birer kontrol karakteridir. */
    bool sonuc1 = iscntrl('\a');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = iscntrl('\b');
    cout << sonuc2 << endl; // 1

    bool sonuc3 = iscntrl('\t');
    cout << sonuc3 << endl; // 1

    bool sonuc4 = iscntrl('\n');
    cout << sonuc4 << endl; // 1

    bool sonuc5 = iscntrl('F');
    cout << sonuc5 << endl; // 0

    return 0;
}
