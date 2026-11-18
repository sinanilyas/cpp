#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    bool aktif = true;

    // aktif deðiþkeninin deðeri true olduðu için komut çalýþtýrýlýr.
    if (aktif) cout << "Sistem aktiftir." << endl;

    aktif = false;

    // aktif deðiþkeninin deðeri false olduðu için komut çalýþtýrýlmaz.
    if (aktif) cout << "Sistem aktiftir." << endl;

    cout << "Program sona erdi." << endl;

    return 0;
}
