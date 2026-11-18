#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Karakter dizisine çift tırnak içinde yazılan bir metinle de
     * başlangıç değeri verilebilir. Bu yöntemde null karakteri metnin
     * sonuna otomatik olarak eklenir.
     *
     * Aşağıdaki tanımlama char ad[] = {'A', 'l', 'i', '\0'}; ile aynıdır
     * ve 4 elemanlı bir dizi oluşturur. */
    char ad[] = "Ali";

    cout << ad << endl; // Ali

    for (int i = 0; i < 4; i++)
    {
        cout << static_cast<int>(ad[i]) << " ";
    }
    cout << endl; // 65 108 105 0

    /* Tek tırnak tek bir karakteri, çift tırnak ise bir metni gösterir.
     * 'A' bir char değeridir. "A" ise 'A' ve '\0' karakterlerinden oluşan
     * 2 elemanlı bir metindir. */

    return 0;
}
