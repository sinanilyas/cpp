#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* break komutu, döngü koşulu hâlâ doğru olsa bile
     * döngüyü hemen sonlandırmak için kullanılır.
     * Program döngüden sonraki komuttan devam eder. */

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) break;

        cout << i << endl;
    }

    // Ekrana 1, 2, 3, 4 ve 5 yazdırılır.

    cout << "Döngü sona erdi." << endl;

    return 0;
}
