#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Metinler char tipindeki dizilerde saklanabilir. Bu dizilere
     * karakter dizisi denir. Metnin her karakteri dizinin bir
     * elemanýna yerleþtirilir.
     *
     * Metnin nerede bittiðinin anlaþýlmasý için son karakterden sonra
     * null karakteri ('\0') yazýlýr. null karakterinin ASCII kodu 0'dýr.
     * Bu nedenle dizinin eleman sayýsý metnin uzunluðundan 1 fazla
     * olmalýdýr: "Ali" metni için 3 + 1 = 4 eleman gerekir.
     *
     * Diðer dizilerde olduðu gibi süslü parantezle baþlangýç deðeri
     * verilebilir. Son karakter null karakteri olmalýdýr. */
    char ad[4] = {'A', 'l', 'i', '\0'};

    for (int i = 0; i < 3; i++)
    {
        cout << ad[i];
    }
    cout << endl; // Ali

    cout << static_cast<int>(ad[3]) << endl; // 0

    /* '\0' yerine 0 da yazýlabilir: {'A', 'l', 'i', 0}
     * '0' yazýlmamalýdýr. '0' rakam karakteridir ve ASCII kodu 48'dir. */

    return 0;
}
