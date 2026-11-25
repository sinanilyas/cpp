#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string adSoyad;

    cout << "Adınızı ve soyadınızı giriniz: ";

    /* getline(cin, metin) Enter tuşuna basılana kadar girilen bütün
     * karakterleri boşluklar dahil okur. Enter karakteri ('\n') metne
     * eklenmez. Karakter dizilerindeki cin.get'ten farklı olarak en fazla
     * kaç karakter okunacağı yazılmaz. */
    getline(cin, adSoyad);

    cout << "Merhaba " << adSoyad << endl;

    /* Ahmet Kaya       -> Ahmet Kaya
     * Mehmet Ali Kaya  -> Mehmet Ali Kaya
     *
     * cin.get Enter karakterini girdi tamponunda bırakır. getline ise
     * Enter karakterini tampondan alır ve atar. Bu nedenle art arda
     * getline kullanıldığında aralarında cin.ignore gerekmez. */

    return 0;
}
