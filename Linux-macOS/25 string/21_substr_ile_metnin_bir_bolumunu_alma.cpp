#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string cumle = "Ali okula gitti";

    /* substr(konum, n) metnin konum indisinden başlayan n karakterlik
     * bölümünü yeni bir metin olarak döndürür. Asıl metin değişmez. */
    string bolum = cumle.substr(4, 5);

    cout << bolum << endl; // okula
    cout << cumle << endl; // Ali okula gitti

    // Karakter sayısı yazılmazsa konumdan metnin sonuna kadar olan bölüm alınır.
    cout << cumle.substr(10) << endl; // gitti

    return 0;
}
