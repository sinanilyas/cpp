#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* İç döngünün başlangıç değeri dış döngünün değişkenine
     * bağlı olarak değiştirilebilir.
     * Böylece her satırda yazdırılan karakter sayısı azaltılabilir. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
