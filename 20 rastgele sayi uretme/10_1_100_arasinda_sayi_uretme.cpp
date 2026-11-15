#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* rand() % 100 ifadesi 0-99 arasýnda bir sayý üretir.
     * Sonuca 1 eklenirse aralýk 1 kaydýrýlýr ve
     * 1-100 arasýnda bir sayý elde edilir.
     *
     * % iþleminin önceliði + iþleminden yüksek olduðu için
     * önce mod alýnýr, sonra 1 eklenir. Parantez gerekmez. */

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % 100 + 1 << endl;
    }

    return 0;
}
