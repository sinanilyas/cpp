#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // '\0' yerine 0 da yazılabilir
    char ad[] = {'A', 'l', 'i', 0};

    cout << ad[3] << endl; // null karakteri ekranda görünmez
    cout << static_cast<int>(ad[3]) << endl; // 0

    return 0;
}
