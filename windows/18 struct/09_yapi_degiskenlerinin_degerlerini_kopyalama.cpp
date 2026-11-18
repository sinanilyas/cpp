#include <iostream>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    urun urun1 = {101, 25000.0};
    urun urun2 = urun1;

    cout << urun1.kod << endl;   // 101
    cout << urun1.fiyat << endl; // 25000

    cout << urun2.kod << endl;   // 101
    cout << urun2.fiyat << endl; // 25000

    return 0;
}
