#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    bool aktif = true;

    // aktif değişkeninin değeri true olduğu için komut çalıştırılır.
    if (aktif) cout << "Sistem aktiftir." << endl;

    aktif = false;

    // aktif değişkeninin değeri false olduğu için komut çalıştırılmaz.
    if (aktif) cout << "Sistem aktiftir." << endl;

    cout << "Program sona erdi." << endl;

    return 0;
}
