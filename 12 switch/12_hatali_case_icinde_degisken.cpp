#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 2;
    int digerSayi = 3;

    /* HATA: case etiketlerinde derleme zamanýnda
     * deðeri belli olan sabit ifadeler kullanýlmalýdýr.
     * Normal deðiþkenler case deðeri olarak kullanýlamaz. */

    switch (sayi)
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case digerSayi: // HATA: Sabit ifade deðil.
            cout << "Üç" << endl;
            break;
    }

    return 0;
}
