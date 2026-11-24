#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Karakter dizisinin herhangi bir karakteri, diğer dizilerde olduğu
     * gibi indisi kullanılarak değiştirilebilir. */

    char ad[] = "ali";

    ad[0] = 'A';

    cout << ad << endl; // Ali

    return 0;
}
