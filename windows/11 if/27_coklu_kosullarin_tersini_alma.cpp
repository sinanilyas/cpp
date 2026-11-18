#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // Çoklu koþulun tamamýnýn tersi alýnýr.
    if (!(sayi >= 10 && sayi <= 20))
        cout << "Sayý 10-20 aralýðýnýn dýþýndadýr." << endl;

    // Çoklu koþulun tersi, karþýlaþtýrma operatörleri
    // ve mantýksal operatörler tersine çevrilerek de yazýlabilir.
    if (sayi < 10 || sayi > 20)
        cout << "Sayý 10-20 aralýðýnýn dýþýndadýr." << endl;

    return 0;
}
