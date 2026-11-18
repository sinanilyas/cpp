#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayilar[] = {10, 20, 30, 40, 50, 60, 70};

    // sizeof dizinin bütün elemanlarının kapladığı toplam alanı verir.
    cout << sizeof(sayilar) << endl;    // Genellikle 28
    cout << sizeof(int) << endl;        // Genellikle 4
    cout << sizeof(sayilar[0]) << endl; // Genellikle 4

    /* Dizinin kapladığı alan bir elemanın kapladığı alana bölünürse
     * eleman sayısı bulunur. */
    cout << sizeof(sayilar) / sizeof(int) << endl;        // 7
    cout << sizeof(sayilar) / sizeof(sayilar[0]) << endl; // 7

    /* sizeof(sayilar[0]) kullanmak daha güvenlidir. Dizinin tipi
     * değiştirilirse (örneğin double yapılırsa) ifade değiştirilmeden
     * doğru sonucu verir. */
    int elemanSayisi = sizeof(sayilar) / sizeof(sayilar[0]);

    for (int i = 0; i < elemanSayisi; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    return 0;
}
