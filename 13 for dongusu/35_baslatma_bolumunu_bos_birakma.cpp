#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün baþlatma bölümü boþ býrakýlabilir.
     * Bu durumda deðiþken döngüden önce tanýmlanabilir.
     * Baþlatma bölümü boþ olsa bile ; iþareti kullanýlmalýdýr. */

    int i = 1;

    for (; i <= 5; i++)
    {
        cout << i << endl;
    }

    // Ekrana sýrasýyla 1, 2, 3, 4 ve 5 yazdýrýlýr.

    return 0;
}
