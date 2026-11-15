#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int MAX = 200;
    char metin[MAX];

    cout << "Metni giriniz. Bitirmek için * girip Enter tuþuna basýnýz:" << endl;

    /* cin.get fonksiyonuna üçüncü deðer olarak bir karakter verilirse
     * okuma Enter tuþunda deðil, bu karakterde durur. Böylece Enter
     * karakterleri de diziye eklenir ve birden fazla satýr okunabilir.
     * Bitiþ karakteri (*) diziye eklenmez. En fazla MAX - 1 karakter okunur. */
    cin.get(metin, MAX, '*');

    cout << "Girilen metin:" << endl;
    cout << metin << endl;

    /* Girdi:
     * Bugün hava
     * çok güzel.*
     *
     * Ekran çýktýsý:
     * Girilen metin:
     * Bugün hava
     * çok güzel. */

    return 0;
}
