#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char ad[] = {'A', 'l', 'i', '\0'};

    /* Karakter dizisinin adý cout ile yazdýrýlýrsa dizinin bütün
     * elemanlarý metinmiþ gibi yazdýrýlýr. cout, ilk elemandan baþlayarak
     * null karakterine kadar bütün karakterleri yazdýrýr. Elemanlarý
     * döngü ile tek tek yazdýrmak gerekmez. */
    cout << ad << endl; // Ali

    // Sabit metinlerle birlikte de yazdýrýlabilir.
    cout << "Merhaba " << ad << "!" << endl; // Merhaba Ali!

    /* Bu kolaylýk yalnýzca karakter dizilerinde vardýr. int gibi diðer
     * tiplerdeki diziler cout ile bu þekilde yazdýrýlamaz. */

    return 0;
}
