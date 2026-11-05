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

    /* Yapý türünde deðiþken tanýmlarken
     * struct anahtar sözcüðü de kullanýlabilir. */
    struct urun buzdolabi;

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatý: " << buzdolabi.fiyat << endl;

    return 0;
}
