#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    char ad[] = {'A', 'l', 'i', '\0'};

    /* Karakter dizisinin adı cout ile yazdırılırsa dizinin bütün
     * elemanları metinmiş gibi yazdırılır. cout, ilk elemandan başlayarak
     * null karakterine kadar bütün karakterleri yazdırır. Elemanları
     * döngü ile tek tek yazdırmak gerekmez. */
    cout << ad << endl; // Ali

    // Sabit metinlerle birlikte de yazdırılabilir.
    cout << "Merhaba " << ad << "!" << endl; // Merhaba Ali!

    /* Bu kolaylık yalnızca karakter dizilerinde vardır. int gibi diğer
     * tiplerdeki diziler cout ile bu şekilde yazdırılamaz. */

    return 0;
}
