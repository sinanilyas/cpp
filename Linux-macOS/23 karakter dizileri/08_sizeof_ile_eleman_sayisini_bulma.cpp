#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    char ad[] = "Ali";

    /* char tipi 1 bayt yer kapladığı için sizeof, karakter dizisinin
     * eleman sayısını doğrudan verir. Diğer tiplerdeki dizilerde olduğu
     * gibi bir elemanın boyutuna bölmek gerekmez. */
    cout << sizeof(ad) << endl; // 4 (null karakteri dahil)

    // sizeof metnin uzunluğunu değil, dizinin eleman sayısını verir.
    char sehir[20] = "Sakarya";

    cout << sizeof(sehir) << endl; // 20

    return 0;
}
