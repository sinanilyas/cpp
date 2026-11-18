#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int i;

    for (i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    cout << i << endl;

    return 0;
}
