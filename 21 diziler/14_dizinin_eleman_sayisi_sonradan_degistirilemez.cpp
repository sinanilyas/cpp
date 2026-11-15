#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dizinin eleman sayýsý tanýmlama sýrasýnda belirlenir ve
     * sonradan deðiþtirilemez. Diziye yeni eleman eklenemez,
     * diziden eleman çýkarýlamaz.
     *
     * Kaç eleman gerekeceði önceden bilinmiyorsa dizi, gerekebilecek
     * en fazla eleman sayýsýyla tanýmlanýr. Kullanýlan eleman sayýsý
     * ayrý bir deðiþkende tutulur. */
    const int KAPASITE = 5;

    int sayilar[KAPASITE];
    int adet = 0; // Diziye yerleþtirilen sayý adedi
    int sayi;

    do
    {
        cout << "Bir sayý giriniz (bitirmek için 0): ";
        cin >> sayi;

        if (sayi != 0)
        {
            // Sayý adet indisli elemana yerleþtirilir, sonra adet 1 artýrýlýr
            sayilar[adet++] = sayi;
        }
    } while (sayi != 0 && adet < KAPASITE);

    if (adet == KAPASITE)
        cout << "Dizi doldu. Daha fazla sayý eklenemez." << endl;

    cout << "Girilen sayýlar: ";

    for (int i = 0; i < adet; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    /* Dizi 5 elemanlýdýr, ancak yalnýzca ilk adet tane elemaný
     * kullanýlýr. Daha fazla sayý saklamak için KAPASITE deðeri
     * büyütülmeli ve program yeniden derlenmelidir. */

    return 0;
}
