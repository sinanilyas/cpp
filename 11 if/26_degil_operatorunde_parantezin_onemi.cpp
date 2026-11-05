#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = -5;

    // Karþýlaþtýrmanýn sonucu tersine çevrilir.
    if (!(sayi > 0)) cout << "Birinci koþul doðrudur." << endl;

    // Önce sayi'nin mantýksal deðeri tersine çevrilir,
    // sonra karþýlaþtýrma yapýlýr
    if (!sayi > 0) cout << "Ýkinci koþul doðrudur." << endl;

    return 0;
}
