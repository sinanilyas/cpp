#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayilar[5];

    /* Dizi elemanlarına dizi adı ve köşeli parantez içine yazılan
     * indis (sıra numarası) ile erişilir.
     * İndisler 0'dan başlar. 5 elemanlı bir dizinin ilk elemanının
     * indisi 0, son elemanının indisi 4'tür. sayilar[5] diye bir
     * eleman yoktur. */

    sayilar[0] = 10;
    sayilar[1] = 20;
    sayilar[2] = 30;
    sayilar[3] = 40;
    sayilar[4] = 50;

    cout << sayilar[0] << endl; // 10
    cout << sayilar[4] << endl; // 50

    // Dizi elemanları sıradan değişkenler gibi kullanılabilir.
    sayilar[1] = sayilar[0] + sayilar[4];
    sayilar[2] += 5;

    cout << sayilar[1] << endl; // 60
    cout << sayilar[2] << endl; // 35

    return 0;
}
