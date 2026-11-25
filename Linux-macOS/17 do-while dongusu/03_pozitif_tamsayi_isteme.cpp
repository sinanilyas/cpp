#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    /* Kullanıcı pozitif bir tamsayı girene kadar
     * sayı istemeye devam edilir.
     * İlk giriş, koşul kontrol edilmeden yapılır. */

    do
    {
        cout << "Pozitif bir tamsayı giriniz: ";
        cin >> sayi;
    } while (sayi <= 0);

    cout << "Girdiğiniz sayı: " << sayi << endl;

    return 0;
}
