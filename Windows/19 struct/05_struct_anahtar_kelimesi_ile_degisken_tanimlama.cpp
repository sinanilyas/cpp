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

    /* Yapı türünde değişken tanımlarken
     * struct anahtar sözcüğü de kullanılabilir. */
    struct urun buzdolabi;

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatı: " << buzdolabi.fiyat << endl;

    return 0;
}
