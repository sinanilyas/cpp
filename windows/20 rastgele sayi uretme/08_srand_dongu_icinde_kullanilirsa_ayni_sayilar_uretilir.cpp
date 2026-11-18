#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* srand() döngü içinde çağrılırsa her tekrarda tohum değeri
     * yeniden verilir ve sayı dizisi baştan başlar.
     * Döngü bir saniyeden kısa sürede tamamlandığı için time(0)
     * her tekrarda aynı değeri verir. Bu yüzden hep aynı sayı üretilir. */

    for (int i = 1; i <= 5; i++)
    {
        srand(time(0)); // MANTIK HATASI: srand() döngü içinde çağrılmamalıdır
        cout << rand() << endl;
    }

    // Ekrana 5 kez aynı sayı yazdırılır.

    /* srand() programın başında yalnızca bir kez çağrılmalıdır. */

    return 0;
}
