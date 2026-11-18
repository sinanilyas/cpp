#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Küme parantezleri boş bırakılarak tüm elemanlara
     * başlangıç değeri olarak 0 verilebilir. */
    int sayilar[5] = {};

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 0 0 0 0 0 yazdırılır.

    return 0;
}
