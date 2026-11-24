#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;

    // Önce 3 == 3 karşılaştırılır, sonra sonuç a'ya atanır.
    // Sonra da a'nın değeri kontrol edilir.
    if (a = 3 == 3)
        cout << "Koşul doğrudur." << endl;
    else
        cout << "Koşul yanlıştır." << endl;

    cout << "a = " << a << endl; // 1

    return 0;
}
