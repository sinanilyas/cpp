#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dış döngüde kullanılan break komutu dış döngüyü sonlandırır.
     * Böylece iç döngü de artık çalıştırılmaz. */

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3) break;

        cout << "Dış döngü: " << i << endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "   İç döngü: " << j << endl;
        }
    }

    return 0;
}
