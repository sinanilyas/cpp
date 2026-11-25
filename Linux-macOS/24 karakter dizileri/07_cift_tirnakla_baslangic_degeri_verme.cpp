#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Karakter dizisine çift tırnak içinde yazılan bir metinle de
     * başlangıç değeri verilebilir. Bu yöntemde null karakteri metnin
     * sonuna otomatik olarak eklenir.
     *
     * Aşağıdaki tanımlama char ad[] = {'A', 'l', 'i', '\0'}; ile aynıdır
     * ve 4 elemanlı bir dizi oluşturur. */
    char ad[] = "Ali";

    cout << ad << endl; // Ali

    /* Tek tırnak tek bir karakteri, çift tırnak ise bir metni gösterir.
     * 'A' bir char değeridir. "A" ise 'A' ve '\0' karakterlerinden oluşan
     * 2 elemanlı bir metindir. */

    return 0;
}
