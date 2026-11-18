#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Asal sayılar, 1'den büyük ve yalnızca 1'e ve
     * kendisine kalansız bölünebilen tamsayılardır.
     * Sayının başka bir böleni bulunursa break komutuyla
     * döngü sonlandırılır. */

    int sayi;
    bool asal = true;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

	// 0 ve 1 asal sayı değildir
    if (sayi < 2) asal = false;

	/* 2 asal sayıdır, döngü hiç çalışmadan atlanır */

    for (int i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            asal = false;
            break;
        }
    }

    if (asal)
        cout << sayi << " asal sayıdır." << endl;
    else
        cout << sayi << " asal sayı değildir." << endl;

    return 0;
}
