#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = -5;

    // Karşılaştırmanın sonucu tersine çevrilir.
    if (!(sayi > 0)) cout << "Birinci koşul doğrudur." << endl;

    // Önce sayi'nin mantıksal değeri tersine çevrilir,
    // sonra karşılaştırma yapılır
    if (!sayi > 0) cout << "İkinci koşul doğrudur." << endl;

    return 0;
}
