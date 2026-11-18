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

    /* urun veri tipinde buzdolabi adlı bir değişken tanımlanır.
     * Bu değişken kod ve fiyat üyelerine sahiptir. */
    urun buzdolabi;

    // Yapı üyelerine nokta (.) operatörü ile erişilir.
    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatı: " << buzdolabi.fiyat << endl;

    return 0;
}
