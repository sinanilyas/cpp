#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 2;
    int digerSayi = 3;

    /* HATA: case etiketlerinde derleme zamanında
     * değeri belli olan sabit ifadeler kullanılmalıdır.
     * Normal değişkenler case değeri olarak kullanılamaz. */

    switch (sayi)
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case digerSayi: // HATA: Sabit ifade değil.
            cout << "Üç" << endl;
            break;
    }

    return 0;
}
