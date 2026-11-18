#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    bool aktif = true;

    /* Aşağıdaki iki if aynı anlama gelir. */

    if (aktif) cout << "Sistem aktiftir." << endl;

    if (aktif == true) cout << "Sistem aktiftir." << endl;

    return 0;
}
