#include <iostream>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Yapý deðiþkeni tanýmlanýrken üyelerine baþlangýç
     * deðerleri küme parantezleri içerisinde verilebilir.
     * Deðerler, üyelerin tanýmlanma sýrasýna göre atanýr. */
    urun buzdolabi = {101, 25000.0};

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatý: " << buzdolabi.fiyat << endl;

    return 0;
}
