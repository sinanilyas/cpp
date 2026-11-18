#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int MAX = 30;
    char adSoyad[MAX];

    cout << "Adınızı ve soyadınızı giriniz: ";

    /* cin.get(dizi, MAX) Enter tuşuna basılana kadar girilen bütün
     * karakterleri boşluklar dahil okur ve sonuna null karakteri ekler.
     * Enter karakteri ('\n') diziye eklenmez. */
    cin.get(adSoyad, MAX);

    cout << "Merhaba " << adSoyad << endl;

    /* Ahmet Kaya       -> Ahmet Kaya
     * Mehmet Ali Kaya  -> Mehmet Ali Kaya
     *
     * cin >> kullanımından farklı olarak baştaki boşluklar da okunur. */

    return 0;
}
