#include <iostream>
using namespace std;

/* Yapý tanýmlamasýnýn sonunda deðiþken adý yazýlarak
 * ayný zamanda bu türde bir deðiþken oluþturulabilir. */
struct urun
{
    int kod;
    double fiyat;
} buzdolabi;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << buzdolabi.kod << endl;
    cout << buzdolabi.fiyat << endl;

    return 0;
}
