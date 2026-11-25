#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* toupper ve tolower komutları sonucu karakter olarak değil, harfin
     * ASCII kodu olarak, yani int tipinde verir. Sonuç doğrudan cout ile
     * yazdırılırsa harf yerine harfin ASCII kodu yazdırılır. */

    cout << toupper('f') << endl; // MANTIK HATASI: F yerine 70 yazdırılır

    /* Sonucun harf olarak yazdırılması için char tipli bir değişkene
     * atanması gerekir. */

    return 0;
}
