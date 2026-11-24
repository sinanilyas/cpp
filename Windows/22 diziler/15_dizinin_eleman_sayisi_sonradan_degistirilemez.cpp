#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dizinin eleman sayısı tanımlama sırasında belirlenir ve
     * sonradan değiştirilemez. Diziye yeni eleman eklenemez,
     * diziden eleman çıkarılamaz.
     *
     * Kaç eleman gerekeceği önceden bilinmiyorsa dizi, gerekebilecek
     * en fazla eleman sayısıyla tanımlanır. Kullanılan eleman sayısı
     * ayrı bir değişkende tutulur. */
    const int KAPASITE = 5;

    int sayilar[KAPASITE];
    int adet = 0; // Diziye yerleştirilen sayı adedi
    int sayi;

    do
    {
        cout << "Bir sayı giriniz (bitirmek için 0): ";
        cin >> sayi;

        if (sayi != 0)
        {
            // Sayı adet indisli elemana yerleştirilir, sonra adet 1 artırılır
            sayilar[adet++] = sayi;
        }
    } while (sayi != 0 && adet < KAPASITE);

    if (adet == KAPASITE)
        cout << "Dizi doldu. Daha fazla sayı eklenemez." << endl;

    cout << "Girilen sayılar: ";

    for (int i = 0; i < adet; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    /* Dizi 5 elemanlıdır, ancak yalnızca ilk adet tane elemanı
     * kullanılır. Daha fazla sayı saklamak için KAPASITE değeri
     * büyütülmeli ve program yeniden derlenmelidir. */

    return 0;
}
