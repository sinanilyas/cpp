#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* || operatörü kullanıldığında koşullardan en az
     * birinin doğru olması döngünün devam etmesi için yeterlidir.
     * Her iki koşul da yanlış olduğunda döngü sona erer. */

    for (int i = 1, j = 10; i <= 3 || j >= 7; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
