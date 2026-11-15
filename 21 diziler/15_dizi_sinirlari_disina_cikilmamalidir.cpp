#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[5] = {10, 20, 30, 40, 50};

    /* 5 elemanlý dizinin geçerli indisleri 0, 1, 2, 3 ve 4'tür.
     * Döngü koþulunda < yerine <= yazýlýrsa döngü 6 kez döner
     * ve dizide olmayan sayilar[5] elemanýna eriþilir. */
    for (int i = 0; i <= 5; i++) // MANTIK HATASI: Koþul i < 5 olmalýdýr
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Genellikle 10 20 30 40 50 ve anlamsýz bir deðer yazdýrýlýr.

    /* C++ indisin dizi sýnýrlarý içinde olup olmadýðýný denetlemez.
     * Program derlenir, ancak dizinin dýþýndaki bir elemana eriþmenin
     * sonucu belirsizdir. Genellikle dizinin hemen arkasýndaki bellek
     * alanýndan anlamsýz bir deðer okunur. Derleyici ayarlarýna göre
     * program beklenmedik biçimde çalýþabilir ya da çökebilir.
     *
     * Dizi sýnýrlarý dýþýna deðer yazmak daha da tehlikelidir: baþka
     * deðiþkenlerin deðerleri bozulabilir ya da program çökebilir. */

    return 0;
}
