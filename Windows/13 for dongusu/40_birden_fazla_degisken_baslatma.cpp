#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* for döngüsünün başlatma bölümünde aynı tipte
     * birden fazla değişken tanımlanabilir.
     * Değişkenler virgül ile birbirinden ayrılır. */

    for (int i = 1, j = 10; i <= 5; i++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    return 0;
}
