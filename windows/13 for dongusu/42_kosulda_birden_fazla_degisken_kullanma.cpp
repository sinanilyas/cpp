#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü koşulunda birden fazla değişken kullanılabilir.
     * Bu örnekte i artırılırken j azaltılır.
     * i değeri j değerinden küçük olduğu sürece döngü çalışır. */

    for (int i = 1, j = 9; i < j; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
