#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngünün tekrar sayısı sabit olmak zorunda değildir.
     * Kullanıcıdan alınan bir değer de döngü koşulunda
     * kullanılabilir. */

    int adet;

    cout << "Kaç kez Merhaba yazdırılsın? ";
    cin >> adet;

    for (int i = 0; i < adet; i++)
    {
        cout << i+1 << ". Merhaba" << endl;
    }

    return 0;
}
