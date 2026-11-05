#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    bool aktif = true;

    /* Aþaðýdaki iki if ayný anlama gelir. */

    if (aktif) cout << "Sistem aktiftir." << endl;

    if (aktif == true) cout << "Sistem aktiftir." << endl;

    return 0;
}
