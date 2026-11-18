#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir sayının pozitif bölenleri, o sayıyı
     * kalansız bölen pozitif tamsayılardır.
     * Döngü içerisinde % operatörü kullanılarak
     * bölenler bulunabilir. */

    int sayi;

    cout << "Pozitif bir tamsayı giriniz: ";
    cin >> sayi;

    for (int i = 1; i <= sayi; i++)
    {
        if (sayi % i == 0) cout << i << endl;
    }

    return 0;
}
