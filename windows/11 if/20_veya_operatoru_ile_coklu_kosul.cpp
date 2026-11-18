#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz (0-1): ";
    cin >> sayi;

    // Koþullardan en az biri doðruysa if bloðu çalýþtýrýlýr.
    if (sayi == 0 || sayi == 1)
        cout << "Sayý 0 veya 1'dir." << endl;
    else
        cout << "Sayý 0 veya 1 deðildir." << endl;

    return 0;
}
