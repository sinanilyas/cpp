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

    urun buzdolabi, firin;

    /* Her yapý deðiþkeninin kendine ait üyeleri vardýr.
     * buzdolabýnýn kendine ait kod ve fiyat üye deðiþkenleri,
     * fýrýnýn kendine ait kod ve fiyat üye deðiþkenleri vardýr. */

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    firin.kod = 201;
    firin.fiyat = 15000.0;

    cout << "Buzdolabý ürün kodu: " << buzdolabi.kod << endl;
    cout << "Buzdolabý ürün fiyatý: " << buzdolabi.fiyat << endl;

    cout << "Fýrýn ürün kodu: " << firin.kod << endl;
    cout << "fýrýn ürün fiyatý: " << firin.fiyat << endl;

    return 0;
}
