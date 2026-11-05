#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Yapýya isim vermeden doðrudan deðiþken tanýmlanabilir.
     * Bu durumda yapý türünün adý bulunmaz.
     * Yapý türünün adý olmadýðý için daha sonra bu türün
     * adýný kullanarak baþka bir deðiþken tanýmlanamaz. */
    struct
    {
        int kod;
        double fiyat;
    } buzdolabi;

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << buzdolabi.kod << endl;   // 101
    cout << buzdolabi.fiyat << endl; // 25000

    return 0;
}
