#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    srand(time(0));

    /* 100-105 aralığında 6 farklı sayı vardır:
     * 100, 101, 102, 103, 104, 105
     *
     * rand() % 6 ifadesi 0-5 arasında bir sayı üretir.
     * Sonuca 100 eklenirse 100-105 arasında bir sayı elde edilir. */

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % 6 + 100 << endl;
    }

    /* Sık yapılan hata: rand() % 5 + 100 ifadesi
     * 100-104 arasında sayı üretir, 105 hiç üretilmez. */

    return 0;
}
