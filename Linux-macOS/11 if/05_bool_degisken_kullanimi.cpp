#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    bool aktif = true;

    // aktif değişkeninin değeri true olduğu için komut çalıştırılır.
    if (aktif) cout << "Sistem aktiftir." << endl;

    aktif = false;

    // aktif değişkeninin değeri false olduğu için komut çalıştırılmaz.
    if (aktif) cout << "Sistem aktiftir." << endl;

    cout << "Program sona erdi." << endl;

    return 0;
}
