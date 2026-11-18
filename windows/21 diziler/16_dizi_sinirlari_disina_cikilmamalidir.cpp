#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayilar[5] = {10, 20, 30, 40, 50};

    /* 5 elemanlı dizinin geçerli indisleri 0, 1, 2, 3 ve 4'tür.
     * Döngü koşulunda < yerine <= yazılırsa döngü 6 kez döner
     * ve dizide olmayan sayilar[5] elemanına erişilir. */
    for (int i = 0; i <= 5; i++) // MANTIK HATASI: Koşul i < 5 olmalıdır
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Genellikle 10 20 30 40 50 ve anlamsız bir değer yazdırılır.

    /* C++ indisin dizi sınırları içinde olup olmadığını denetlemez.
     * Program derlenir, ancak dizinin dışındaki bir elemana erişmenin
     * sonucu belirsizdir. Genellikle dizinin hemen arkasındaki bellek
     * alanından anlamsız bir değer okunur. Derleyici ayarlarına göre
     * program beklenmedik biçimde çalışabilir ya da çökebilir.
     *
     * Dizi sınırları dışına değer yazmak daha da tehlikelidir: başka
     * değişkenlerin değerleri bozulabilir ya da program çökebilir. */

    return 0;
}
