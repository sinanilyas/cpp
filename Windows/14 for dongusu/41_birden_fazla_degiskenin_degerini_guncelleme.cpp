#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* for döngüsünün artış bölümünde virgül kullanılarak
     * birden fazla ifade yazılabilir.
     * Bu ifadeler her tekrardan sonra soldan sağa çalıştırılır. */

    for (int i = 1, j = 10; i <= 5; i++, j--)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    return 0;
}
