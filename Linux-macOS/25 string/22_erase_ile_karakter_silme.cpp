#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string adSoyad = "Ali Veli Kaya";

    /* erase(konum, n) metnin konum indisinden başlayan n karakterini
     * siler. Sonraki karakterler sola kayar. Asıl metin değişir. */
    adSoyad.erase(4, 5); // "Veli " silinir

    cout << adSoyad << endl; // Ali Kaya

    // Karakter sayısı yazılmazsa konumdan metnin sonuna kadar olan bölüm silinir.
    adSoyad.erase(3);

    cout << adSoyad << endl; // Ali

    return 0;
}
