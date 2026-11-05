#include <iostream>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
    int stok;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Baþlangýç deðerlerinin tamamý verilmek zorunda deðildir.
     * Eksik býrakýlan üyelere baþlangýç deðeri olarak 0 verilir. */
    urun buzdolabi = {101, 25000.0};

    cout << "Ürün kodu: " << buzdolabi.kod << endl;     // 101
    cout << "Ürün fiyatý: " << buzdolabi.fiyat << endl; // 25000
    cout << "Stok miktarý: " << buzdolabi.stok << endl; // 0

    return 0;
}
