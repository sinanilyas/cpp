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

    urun buzdolabi, firin;

    /* Her yapı değişkeninin kendine ait üyeleri vardır.
     * buzdolabının kendine ait kod ve fiyat üye değişkenleri,
     * fırının kendine ait kod ve fiyat üye değişkenleri vardır. */

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    firin.kod = 201;
    firin.fiyat = 15000.0;

    cout << "Buzdolabı ürün kodu: " << buzdolabi.kod << endl;
    cout << "Buzdolabı ürün fiyatı: " << buzdolabi.fiyat << endl;

    cout << "Fırın ürün kodu: " << firin.kod << endl;
    cout << "fırın ürün fiyatı: " << firin.fiyat << endl;

    return 0;
}
