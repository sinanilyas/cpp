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

    /* Fazla başlangıç değeri verilirse hata oluşur,
     * program derlenmez */

    // HATA: Üye sayısından fazla başlangıç değeri verilmiş
    urun buzdolabi = {101, 25000.0, 5};

    cout << "Ürün kodu: " << buzdolabi.kod << endl;
    cout << "Ürün fiyatı: " << buzdolabi.fiyat << endl;

    return 0;
}
