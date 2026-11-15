#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* rand() % 100 ifadesi 0-99 arasýnda 100 farklý sayý üretir.
     * Bunlardan 80 tanesi (0-79) 80'den küçüktür.
     * Bu nedenle rand() % 100 < 80 koþulunun doðru olma olasýlýðý %80'dir.
     * Örneðin %35 olasýlýk için rand() % 100 < 35 yazýlabilir. */

    int gecenSayisi = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (rand() % 100 < 80)
        {
            cout << i << ". öðrenci geçti." << endl;
            gecenSayisi++;
        }
        else
            cout << i << ". öðrenci kaldý." << endl;
    }

    cout << "Geçen öðrenci sayýsý: " << gecenSayisi << endl; // Genellikle 8'e yakýn

    /* Öðrenci sayýsý arttýkça geçenlerin oraný %80'e daha çok yaklaþýr. */

    return 0;
}
