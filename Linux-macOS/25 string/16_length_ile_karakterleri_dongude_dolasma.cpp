#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string soyad = "Kaya";

    /* Karakterler bir döngüyle tek tek dolaşılabilir. Döngü koşulunda
     * metnin uzunluğu kullanılır. Son karakterin indisi length() - 1'dir.
     *
     * length, işaretsiz (unsigned) bir tamsayı tipi olan size_t tipinde
     * değer döndürür. Bu nedenle döngü değişkeni de size_t olarak
     * tanımlanır. int tanımlanırsa bazı derleyiciler işaretli ve işaretsiz
     * sayıların karşılaştırıldığını belirten bir uyarı verir. */
    for (size_t i = 0; i < soyad.length(); i++)
    {
        cout << i << ": " << soyad[i] << endl;
    }

    /* Ekran çıktısı:
     * 0: K
     * 1: a
     * 2: y
     * 3: a
     */

    return 0;
}
