#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int a = 5;

    // Önce 3 == 3 karþýlaþtýrýlýr, sonra sonuç a'ya atanýr.
    // Sonra da a'nýn deðeri kontrol edilir.
    if (a = 3 == 3)
        cout << "Koþul doðrudur." << endl;
    else
        cout << "Koþul yanlýþtýr." << endl;

    cout << "a = " << a << endl; // 1

    return 0;
}
