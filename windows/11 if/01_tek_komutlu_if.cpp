#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // Koþul doðruysa if'ten sonraki komut çalýþtýrýlýr.
    if (sayi > 0)
        cout << "Sayý pozitiftir." << endl;

    // Bu komut koþuldan baðýmsýz olarak çalýþtýrýlýr.
    cout << "Program sona erdi." << endl;

    return 0;
}
