#include <iostream>
#include <windows.h>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
    int stok;
};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Başlangıç değerlerinin tamamı verilmek zorunda değildir.
     * Eksik bırakılan üyelere başlangıç değeri olarak 0 verilir. */
    urun buzdolabi = {101, 25000.0};

    cout << "Ürün kodu: " << buzdolabi.kod << endl;     // 101
    cout << "Ürün fiyatı: " << buzdolabi.fiyat << endl; // 25000
    cout << "Stok miktarı: " << buzdolabi.stok << endl; // 0

    return 0;
}
