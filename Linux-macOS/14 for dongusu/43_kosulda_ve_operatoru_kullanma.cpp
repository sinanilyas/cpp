#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü koşulunda mantıksal operatörler kullanılabilir.
     * && operatörü kullanıldığında her iki koşulun da
     * doğru olması gerekir. Koşullardan biri yanlış
     * olduğunda döngü sona erer. */

    for (int i = 1, j = 10; i <= 5 && j >= 7; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
