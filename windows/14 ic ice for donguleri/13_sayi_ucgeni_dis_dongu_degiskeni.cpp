#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* İç döngü içerisinde dış döngünün değişkeni de kullanılabilir.
     * Dış döngünün değişkeni, iç döngünün tüm tekrarları
     * boyunca aynı değeri korur. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
