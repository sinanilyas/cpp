#include <iostream>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    /* Yapı türünde değişken tanımlarken
     * struct anahtar sözcüğü de kullanılabilir. */
    struct urun buzdolabi;

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatı: " << buzdolabi.fiyat << endl;

    return 0;
}
