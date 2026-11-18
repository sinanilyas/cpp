#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // Üç koþuldan en az biri doðruysa if komutu çalýþtýrýlýr.
    if (sayi == 1 || sayi == 2 || sayi == 3)
        cout << "Sayý 1, 2 veya 3'tür." << endl;
    else
        cout << "Sayý 1, 2 veya 3 deðildir." << endl;

    return 0;
}
