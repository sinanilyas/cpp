#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = -5;

    // Karşılaştırmanın sonucu tersine çevrilir.
    if (!(sayi > 0)) cout << "Birinci koşul doğrudur." << endl;

    // Önce sayi'nin mantıksal değeri tersine çevrilir,
    // sonra karşılaştırma yapılır
    if (!sayi > 0) cout << "İkinci koşul doğrudur." << endl;

    return 0;
}
