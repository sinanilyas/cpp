#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    /* time(0) her saniye değiştiği için tohum değeri olarak kullanılırsa
     * program her çalıştırıldığında farklı sayılar üretilir. */

    srand(time(0));

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Program aynı saniye içinde iki kez çalıştırılırsa
     * tohum değeri aynı olacağı için aynı sayılar üretilir. */

    return 0;
}
