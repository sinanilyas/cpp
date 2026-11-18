#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün baþlatma bölümünde ayný tipte
     * birden fazla deðiþken tanýmlanabilir.
     * Deðiþkenler virgül ile birbirinden ayrýlýr. */

    for (int i = 1, j = 10; i <= 5; i++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    return 0;
}
