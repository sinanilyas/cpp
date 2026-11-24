#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string adSoyad = "Ali Kaya";

    /* insert(konum, metin) verilen metni konum indisine yerleştirir.
     * Bu konumdaki ve sonraki karakterler sağa kayar. */
    adSoyad.insert(4, "Veli ");

    cout << adSoyad << endl; // Ali Veli Kaya

    return 0;
}
