#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* toupper ve tolower komutları sonucu karakter olarak değil, harfin
     * ASCII kodu olarak, yani int tipinde verir. Sonuç doğrudan cout ile
     * yazdırılırsa harf yerine harfin ASCII kodu yazdırılır. */
    cout << toupper('f') << endl; // MANTIK HATASI: F yerine 70 yazdırılır

    /* Sonucun harf olarak yazdırılması için char tipli bir değişkene
     * atanması gerekir. */

    return 0;
}
