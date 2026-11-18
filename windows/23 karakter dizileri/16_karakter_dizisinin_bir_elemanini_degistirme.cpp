#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char ad[] = "ali";

    cout << ad << endl; // ali

    /* Karakter dizisinin herhangi bir karakteri, diðer dizilerde olduðu
     * gibi indisi kullanýlarak deðiþtirilebilir. */
    ad[0] = 'A';

    cout << ad << endl; // Ali

    /* Dizi tanýmlandýktan sonra baþka bir metin atanamaz.
     * Diðer dizilerde olduðu gibi baþlangýç deðerleri yalnýzca
     * tanýmlama sýrasýnda atanabilir.
     *    char ad[] = "Ali";
     *    ad = "Can"; // HATA
     */

    return 0;
}
