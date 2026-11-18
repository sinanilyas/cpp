#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0)); // Her çalýþtýrmada farklý sayýlar üretilmesi için

    /* Bir sayýnýn 100'e bölümünden kalan 0 ile 99 arasýndadýr.
     * Bu nedenle rand() % 100 ifadesi 0-99 arasýnda bir sayý üretir. */

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % 100 << endl;
    }

    return 0;
}
