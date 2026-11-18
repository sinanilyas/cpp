#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    const int MAX = 200;
    char metin[MAX];

    cout << "Metni giriniz. Bitirmek için * girip Enter tuşuna basınız:" << endl;

    /* cin.get fonksiyonuna üçüncü değer olarak bir karakter verilirse
     * okuma Enter tuşunda değil, bu karakterde durur. Böylece Enter
     * karakterleri de diziye eklenir ve birden fazla satır okunabilir.
     * Bitiş karakteri (*) diziye eklenmez. En fazla MAX - 1 karakter okunur. */
    cin.get(metin, MAX, '*');

    cout << "Girilen metin:" << endl;
    cout << metin << endl;

    /* Girdi:
     * Bugün hava
     * çok güzel.*
     *
     * Ekran çıktısı:
     * Girilen metin:
     * Bugün hava
     * çok güzel. */

    return 0;
}
