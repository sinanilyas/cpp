#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    const int MAX = 30;
    char adSoyad[MAX];

    cout << "Adýnýzý ve soyadýnýzý giriniz: ";

    /* cin.get(dizi, MAX) Enter tuþuna basýlana kadar girilen bütün
     * karakterleri boþluklar dahil okur ve sonuna null karakteri ekler.
     * Enter karakteri ('\n') diziye eklenmez. */
    cin.get(adSoyad, MAX);

    cout << "Merhaba " << adSoyad << endl;

    /* Ahmet Kaya       -> Ahmet Kaya
     * Mehmet Ali Kaya  -> Mehmet Ali Kaya
     *
     * cin >> kullanýmýndan farklý olarak baþtaki boþluklar da okunur. */

    return 0;
}
