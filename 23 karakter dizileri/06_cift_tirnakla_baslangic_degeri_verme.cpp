#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Karakter dizisine çift týrnak içinde yazýlan bir metinle de
     * baþlangýç deðeri verilebilir. Bu yöntemde null karakteri metnin
     * sonuna otomatik olarak eklenir.
     *
     * Aþaðýdaki tanýmlama char ad[] = {'A', 'l', 'i', '\0'}; ile aynýdýr
     * ve 4 elemanlý bir dizi oluþturur. */
    char ad[] = "Ali";

    cout << ad << endl; // Ali

    for (int i = 0; i < 4; i++)
    {
        cout << static_cast<int>(ad[i]) << " ";
    }
    cout << endl; // 65 108 105 0

    /* Tek týrnak tek bir karakteri, çift týrnak ise bir metni gösterir.
     * 'A' bir char deðeridir. "A" ise 'A' ve '\0' karakterlerinden oluþan
     * 2 elemanlý bir metindir. */

    return 0;
}
