#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    srand(time(0)); // Her çalıştırmada farklı sayılar üretilmesi için

    /* Bir sayının 100'e bölümünden kalan 0 ile 99 arasındadır.
     * Bu nedenle rand() % 100 ifadesi 0-99 arasında bir sayı üretir. */

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % 100 << endl;
    }

    return 0;
}
