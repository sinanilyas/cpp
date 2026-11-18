#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char ad[] = "ali";

    cout << ad << endl; // ali

    /* Karakter dizisinin herhangi bir karakteri, diğer dizilerde olduğu
     * gibi indisi kullanılarak değiştirilebilir. */
    ad[0] = 'A';

    cout << ad << endl; // Ali

    /* Dizi tanımlandıktan sonra başka bir metin atanamaz.
     * Diğer dizilerde olduğu gibi başlangıç değerleri yalnızca
     * tanımlama sırasında atanabilir.
     *    char ad[] = "Ali";
     *    ad = "Can"; // HATA
     */

    return 0;
}
