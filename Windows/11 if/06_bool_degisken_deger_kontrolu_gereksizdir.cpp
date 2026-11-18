#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    bool aktif = true;

    /* Aşağıdaki iki if aynı anlama gelir. */

    if (aktif) cout << "Sistem aktiftir." << endl;

    if (aktif == true) cout << "Sistem aktiftir." << endl;

    return 0;
}
