#include <iostream>
#include <windows.h>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    urun urun1 = {101, 25000.0};
    urun urun2 = urun1;

    cout << urun1.kod << endl;   // 101
    cout << urun1.fiyat << endl; // 25000

    cout << urun2.kod << endl;   // 101
    cout << urun2.fiyat << endl; // 25000

    return 0;
}
