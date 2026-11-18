#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    /* Yalnýzca ilk komut koþula baðlýdýr. */

    if (sayi > 0)
        cout << "Sayý pozitiftir." << endl;
        cout << "Sayý sýfýrdan büyüktür." << endl;

    /* Ýkinci cout koþuldan baðýmsýz olarak çalýþtýrýlýr. */

    return 0;
}
