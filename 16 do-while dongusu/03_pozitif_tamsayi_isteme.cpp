#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    /* Kullanýcý pozitif bir tamsayý girene kadar
     * sayý istemeye devam edilir.
     * Ýlk giriþ, koþul kontrol edilmeden yapýlýr. */

    do
    {
        cout << "Pozitif bir tamsayý giriniz: ";
        cin >> sayi;
    } while (sayi <= 0);

    cout << "Girdiðiniz sayý: " << sayi << endl;

    return 0;
}
