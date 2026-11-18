#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* İç döngüde kullanılan continue komutu yalnızca
     * iç döngünün o anki tekrarının kalan kısmını atlar.
     * Dış döngünün çalışmasını etkilemez. */

    for (int i = 1; i <= 3; i++)
    {
        cout << "Dış döngü: " << i << endl;

        for (int j = 1; j <= 5; j++)
        {
            if (j == 3) continue;

            cout << "   İç döngü: " << j << endl;
        }
    }

    return 0;
}
