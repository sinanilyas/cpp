#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int adet;

    cout << "Kaç kez Merhaba yazdırılsın? ";
    cin >> adet;

    /* i 1'den başlatıldığında <= kullanılarak adet dâhil edilir
     * ve cout içinde i yazdırılır. */

    for (int i = 1; i <= adet; i++)
    {
        cout << i << ". Merhaba" << endl;
    }

    return 0;
}
