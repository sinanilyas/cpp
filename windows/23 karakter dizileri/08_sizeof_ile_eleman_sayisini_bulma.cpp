#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char ad[] = "Ali";

    /* char tipi 1 bayt yer kapladýðý için sizeof, karakter dizisinin
     * eleman sayýsýný doðrudan verir. Diðer tiplerdeki dizilerde olduðu
     * gibi bir elemanýn boyutuna bölmek gerekmez. */
    cout << sizeof(ad) << endl; // 4 (null karakteri dahil)

    // sizeof metnin uzunluðunu deðil, dizinin eleman sayýsýný verir.
    char sehir[20] = "Sakarya";

    cout << sizeof(sehir) << endl; // 20

    return 0;
}
