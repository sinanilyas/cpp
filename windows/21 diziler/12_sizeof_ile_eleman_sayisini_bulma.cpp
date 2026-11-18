#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[] = {10, 20, 30, 40, 50, 60, 70};

    // sizeof dizinin bütün elemanlarýnýn kapladýðý toplam alaný verir.
    cout << sizeof(sayilar) << endl;    // Genellikle 28
    cout << sizeof(int) << endl;        // Genellikle 4
    cout << sizeof(sayilar[0]) << endl; // Genellikle 4

    /* Dizinin kapladýðý alan bir elemanýn kapladýðý alana bölünürse
     * eleman sayýsý bulunur. */
    cout << sizeof(sayilar) / sizeof(int) << endl;        // 7
    cout << sizeof(sayilar) / sizeof(sayilar[0]) << endl; // 7

    /* sizeof(sayilar[0]) kullanmak daha güvenlidir. Dizinin tipi
     * deðiþtirilirse (örneðin double yapýlýrsa) ifade deðiþtirilmeden
     * doðru sonucu verir. */
    int elemanSayisi = sizeof(sayilar) / sizeof(sayilar[0]);

    for (int i = 0; i < elemanSayisi; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    return 0;
}
