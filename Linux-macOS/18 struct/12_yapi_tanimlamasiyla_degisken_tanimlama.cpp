#include <iostream>
using namespace std;

/* Yapı tanımlamasının sonunda değişken adı yazılarak
 * aynı zamanda bu türde bir değişken oluşturulabilir. */
struct urun
{
    int kod;
    double fiyat;
} buzdolabi;

int main(int argc, char** argv)
{
    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << buzdolabi.kod << endl;
    cout << buzdolabi.fiyat << endl;

    return 0;
}
