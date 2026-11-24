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

    /* struct ile yalnızca yeni bir veri tipi tanımlanır.
     * Bu tanımlama bellekte bir değişken oluşturmaz. */

    kod = 101;       // HATA: kod değişkeni tanımlı değil
    fiyat = 25000.0; // HATA: fiyat değişkeni tanımlı değil

    return 0;
}
