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

    /* struct ile yalnýzca yeni bir veri tipi tanýmlanýr.
     * Bu tanýmlama bellekte bir deðiþken oluþturmaz. */

    kod = 101;       // HATA: kod deðiþkeni tanýmlý deðil
    fiyat = 25000.0; // HATA: fiyat deðiþkeni tanýmlý deðil

    return 0;
}
