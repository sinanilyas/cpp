#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for döngüsünün başlatma bölümünde aynı tipte
     * birden fazla değişken tanımlanabilir.
     * Değişkenler virgül ile birbirinden ayrılır. */

    for (int i = 1, j = 10; i <= 5; i++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    return 0;
}
