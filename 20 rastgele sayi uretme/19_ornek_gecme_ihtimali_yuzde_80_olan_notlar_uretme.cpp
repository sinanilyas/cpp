#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    const int GECME_NOTU = 50;
    int gecenSayisi = 0;

    /* Notlar doðrudan rand() % 101 ile üretilirse 0-100 arasýndaki her not
     * eþit olasýlýkla gelir ve öðrencilerin yaklaþýk yarýsý kalýr.
     *
     * Þans faktörü ile üretilen sayýlara müdahale edilebilir:
     * Önce öðrencinin geçip geçmeyeceðine %80 olasýlýkla karar verilir,
     * ardýndan not bu karara uygun aralýkta üretilir. */

    for (int i = 1; i <= 10; i++)
    {
        int ogrenciNotu;

        if (rand() % 100 < 80)
            ogrenciNotu = rand() % (100 - GECME_NOTU + 1) + GECME_NOTU; // 50-100
        else
            ogrenciNotu = rand() % GECME_NOTU;                            // 0-49

        cout << i << ". öðrencinin notu: " << ogrenciNotu << endl;

        if (ogrenciNotu >= GECME_NOTU) gecenSayisi++;
    }

    cout << "Geçen öðrenci sayýsý: " << gecenSayisi << endl;

    return 0;
}
