#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz (10-20): ";
    cin >> sayi;

    // Her iki koþul da doðruysa if bloðu çalýþtýrýlýr.
    if (sayi >= 10 && sayi <= 20)
        cout << "Sayý 10 ile 20 arasýndadýr." << endl;
    else
        cout << "Sayý belirtilen aralýkta deðildir." << endl;

    return 0;
}
