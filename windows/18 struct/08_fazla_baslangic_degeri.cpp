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

    /* Fazla baþlangýç deðeri verilirse hata oluþur,
     * program derlenmez */

    // HATA: Üye sayýsýndan fazla baþlangýç deðeri verilmiþ
    urun buzdolabi = {101, 25000.0, 5};

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatý: " << buzdolabi.fiyat << endl;

    return 0;
}
