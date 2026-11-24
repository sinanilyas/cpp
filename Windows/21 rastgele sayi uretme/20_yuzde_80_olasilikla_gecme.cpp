#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(0));

    /* rand() % 100 ifadesi 0-99 arasında 100 farklı sayı üretir.
     * Bunlardan 80 tanesi (0-79) 80'den küçüktür.
     * Bu nedenle rand() % 100 < 80 koşulunun doğru olma olasılığı %80'dir.
     * Örneğin %35 olasılık için rand() % 100 < 35 yazılabilir. */

    int gecenSayisi = 0;

    for (int i = 1; i <= 10; i++)
    {
        // %80 ihtimalle if koşulu doğru olur
        if (rand() % 100 < 80)
        {
            cout << i << ". öğrenci geçti." << endl;
            gecenSayisi++;
        }
        // %20 ihtimalle else bloğu çalışır
        else
            cout << i << ". öğrenci kaldı." << endl;
    }

    cout << "Geçen öğrenci sayısı: " << gecenSayisi << endl; // Genellikle 8'e yakın

    /* Öğrenci sayısı arttıkça geçenlerin oranı %80'e daha çok yaklaşır. */

    return 0;
}
