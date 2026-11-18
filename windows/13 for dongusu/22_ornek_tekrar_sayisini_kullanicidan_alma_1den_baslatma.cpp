#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int adet;

    cout << "Kaç kez Merhaba yazdýrýlsýn? ";
    cin >> adet;

    /* i 1'den baþlatýldýðýnda <= kullanýlarak adet dâhil edilir
     * ve cout içinde i yazdýrýlýr. */

    for (int i = 1; i <= adet; i++)
    {
        cout << i << ". Merhaba" << endl;
    }

    return 0;
}
