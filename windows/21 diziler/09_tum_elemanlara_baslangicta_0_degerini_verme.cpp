#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Küme parantezleri boþ býrakýlarak tüm elemanlara
     * baþlangýç deðeri olarak 0 verilebilir. */
    int sayilar[5] = {};

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 0 0 0 0 0 yazdýrýlýr.

    return 0;
}
