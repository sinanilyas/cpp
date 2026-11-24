#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string sehir = "Sakarya";
    int adet = 0;

    /* Arama metnin başından başlar. Harf her bulunduğunda sayaç artırılır
     * ve sonraki arama bulunan konumun bir fazlasından başlatılır. find
     * string::npos döndürdüğünde metinde başka "a" kalmamıştır. */
    size_t konum = sehir.find("a");

    while (konum != string::npos)
    {
        adet++;
        konum = sehir.find("a", konum + 1);
    }

    cout << sehir << " metninde 'a' harfi " << adet << " kez geçiyor." << endl;

    /* Sakarya metninde 'a' harfi 3 kez geçiyor. */

    return 0;
}
