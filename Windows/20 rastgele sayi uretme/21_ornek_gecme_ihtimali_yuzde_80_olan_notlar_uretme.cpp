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

    const int GECME_NOTU = 50;
    int gecenSayisi = 0;

    /* Notlar doğrudan rand() % 101 ile üretilirse 0-100 arasındaki her not
     * eşit olasılıkla gelir ve öğrencilerin yaklaşık yarısı kalır.
     *
     * Şans faktörü ile üretilen sayılara müdahale edilebilir:
     * Önce öğrencinin geçip geçmeyeceğine %80 olasılıkla karar verilir,
     * ardından not bu karara uygun aralıkta üretilir. */

    for (int i = 1; i <= 10; i++)
    {
        int ogrenciNotu;

        if (rand() % 100 < 80)
            ogrenciNotu = rand() % (100 - GECME_NOTU + 1) + GECME_NOTU; // 50-100
        else
            ogrenciNotu = rand() % GECME_NOTU;                            // 0-49

        cout << i << ". öğrencinin notu: " << ogrenciNotu << endl;

        if (ogrenciNotu >= GECME_NOTU) gecenSayisi++;
    }

    cout << "Geçen öğrenci sayısı: " << gecenSayisi << endl;

    return 0;
}
