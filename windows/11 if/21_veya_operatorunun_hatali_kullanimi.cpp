#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    if (sayi == 3 || 4)
        cout << "Sayý 3 veya 4'tür." << endl;
    else
        cout << "Sayý 3 veya 4 deðildir." << endl;

    /* MANTIK HATASI:
     * Bu koþul her zaman true olur
     * çünkü || operatörünün sað tarafýndaki
     * 4 deðeri true kabul edilir ve
     * (sayi == 3 || true) yazýlmýþ gibi çalýþtýrýlýr
     */

    return 0;
}
