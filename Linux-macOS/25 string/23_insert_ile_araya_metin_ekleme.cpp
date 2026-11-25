#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string adSoyad = "Ali Kaya";

    /* insert(konum, metin) verilen metni konum indisine yerleştirir.
     * Bu konumdaki ve sonraki karakterler sağa kayar. */
    adSoyad.insert(4, "Veli ");

    cout << adSoyad << endl; // Ali Veli Kaya

    return 0;
}
