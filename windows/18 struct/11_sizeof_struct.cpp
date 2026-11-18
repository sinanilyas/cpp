#include <iostream>
#include <windows.h>
using namespace std;

struct urun
{
    int kod;
    int stok;
    int garanti;
};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    urun buzdolabi = {101, 50, 3};

    // sizeof veri tiplerine uygulanabilir.
    cout << sizeof(int) << endl;  // 4
    cout << sizeof(urun) << endl; // 12

    // sizeof değişkenlere de uygulanabilir.
    cout << sizeof(buzdolabi) << endl;         // 12
    cout << sizeof(buzdolabi.kod) << endl;     // 4
    cout << sizeof(buzdolabi.stok) << endl;    // 4
    cout << sizeof(buzdolabi.garanti) << endl; // 4

    return 0;
}
