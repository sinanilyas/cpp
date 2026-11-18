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

    /* urun veri tipinde buzdolabi adlý bir deðiþken tanýmlanýr.
     * Bu deðiþken kod ve fiyat üyelerine sahiptir. */
    urun buzdolabi;

    // Yapý üyelerine nokta (.) operatörü ile eriþilir.
    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatý: " << buzdolabi.fiyat << endl;

    return 0;
}
