#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // Koþul doðruysa if, yanlýþsa else komutu çalýþtýrýlýr.
    if (sayi % 2 == 0)
        cout << "Sayý çifttir." << endl;
    else
        cout << "Sayý tektir." << endl;

    cout << "Program sona erdi." << endl;

    return 0;
}
