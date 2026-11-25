#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    const int MAX = 200;
    char adres[MAX];

    cout << "Adres giriniz." << endl
         << "Bitirmek için * girip Enter tuşuna basınız:" << endl;

    /* cin.get fonksiyonuna üçüncü değer olarak bir karakter verilirse
     * okuma Enter tuşunda değil, bu karakterde durur. Böylece Enter
     * karakterleri de diziye eklenir ve birden fazla satır okunabilir.
     * Bitiş karakteri (*) diziye eklenmez. En fazla MAX - 1 karakter okunur. */
    cin.get(adres, MAX, '*');

    cout << "Girilen adres:" << endl;
    cout << adres << endl;

    /* Girdi:
     * Serdivan
     * Sakarya*
     *
     * Ekran çıktısı:
     * Girilen adres:
     * Serdivan
     * Sakarya
     */

    return 0;
}
