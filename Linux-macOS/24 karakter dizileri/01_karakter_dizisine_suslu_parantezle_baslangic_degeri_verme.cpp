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

    // Döngü tamamlandığında ekranda Ali yazar
    for (int i = 0; i < 3; i++) cout << ad[i];

    cout << endl;

    return 0;
}
