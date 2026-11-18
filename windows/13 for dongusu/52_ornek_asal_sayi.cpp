#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Asal sayýlar, 1'den büyük ve yalnýzca 1'e ve
     * kendisine kalansýz bölünebilen tamsayýlardýr.
     * Sayýnýn baþka bir böleni bulunursa break komutuyla
     * döngü sonlandýrýlýr. */

    int sayi;
    bool asal = true;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

	// 0 ve 1 asal sayý deðildir
    if (sayi < 2) asal = false;

	/* 2 asal sayýdýr, döngü hiç çalýþmadan atlanýr */

    for (int i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            asal = false;
            break;
        }
    }

    if (asal)
        cout << sayi << " asal sayýdýr." << endl;
    else
        cout << sayi << " asal sayý deðildir." << endl;

    return 0;
}
