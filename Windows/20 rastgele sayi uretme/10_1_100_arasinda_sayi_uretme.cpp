#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(0));

    /* rand() % 100 ifadesi 0-99 arasında bir sayı üretir.
     * Sonuca 1 eklenirse aralık 1 kaydırılır ve
     * 1-100 arasında bir sayı elde edilir.
     *
     * % işleminin önceliği + işleminden yüksek olduğu için
     * önce mod alınır, sonra 1 eklenir. Parantez gerekmez. */

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % 100 + 1 << endl;
    }

    return 0;
}
