#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir sayýnýn pozitif bölenleri, o sayýyý
     * kalansýz bölen pozitif tamsayýlardýr.
     * Döngü içerisinde % operatörü kullanýlarak
     * bölenler bulunabilir. */

    int sayi;

    cout << "Pozitif bir tamsayý giriniz: ";
    cin >> sayi;

    for (int i = 1; i <= sayi; i++)
    {
        if (sayi % i == 0) cout << i << endl;
    }

    return 0;
}
