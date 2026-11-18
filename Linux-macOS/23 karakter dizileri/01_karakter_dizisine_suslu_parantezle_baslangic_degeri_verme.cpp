#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Metinler char tipindeki dizilerde saklanabilir. Bu dizilere
     * karakter dizisi denir. Metnin her karakteri dizinin bir
     * elemanına yerleştirilir.
     *
     * Metnin nerede bittiğinin anlaşılması için son karakterden sonra
     * null karakteri ('\0') yazılır. null karakterinin ASCII kodu 0'dır.
     * Bu nedenle dizinin eleman sayısı metnin uzunluğundan 1 fazla
     * olmalıdır: "Ali" metni için 3 + 1 = 4 eleman gerekir.
     *
     * Diğer dizilerde olduğu gibi süslü parantezle başlangıç değeri
     * verilebilir. Son karakter null karakteri olmalıdır. */
    char ad[4] = {'A', 'l', 'i', '\0'};

    for (int i = 0; i < 3; i++)
    {
        cout << ad[i];
    }
    cout << endl; // Ali

    cout << static_cast<int>(ad[3]) << endl; // 0

    /* '\0' yerine 0 da yazılabilir: {'A', 'l', 'i', 0}
     * '0' yazılmamalıdır. '0' rakam karakteridir ve ASCII kodu 48'dir. */

    return 0;
}
