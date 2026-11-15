#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* time(0) her saniye deðiþtiði için tohum deðeri olarak kullanýlýrsa
     * program her çalýþtýrýldýðýnda farklý sayýlar üretilir. */

    srand(time(0));

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Program ayný saniye içinde iki kez çalýþtýrýlýrsa
     * tohum deðeri ayný olacaðý için ayný sayýlar üretilir. */

    return 0;
}
