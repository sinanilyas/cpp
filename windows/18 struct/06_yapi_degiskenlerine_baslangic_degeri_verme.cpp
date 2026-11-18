#include <iostream>
#include <windows.h>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Yapı değişkeni tanımlanırken üyelerine başlangıç
     * değerleri küme parantezleri içerisinde verilebilir.
     * Değerler, üyelerin tanımlanma sırasına göre atanır. */
    urun buzdolabi = {101, 25000.0};

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatı: " << buzdolabi.fiyat << endl;

    return 0;
}
