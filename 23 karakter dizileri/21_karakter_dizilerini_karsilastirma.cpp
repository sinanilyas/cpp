#include <iostream>
#include <cstring> // strcmp için
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* strcmp(metin1, metin2) iki metni karakter karakter, ASCII
     * kodlarýna göre karþýlaþtýrýr ve
     *   metinler aynýysa 0,
     *   metin1 sýralamada önce geliyorsa negatif bir sayý,
     *   metin1 sýralamada sonra geliyorsa pozitif bir sayý döndürür.
     *
     * Döndürülen sayýnýn kendisi derleyiciye göre deðiþebilir.
     * Yalnýzca 0 olup olmadýðýna ve iþaretine bakýlmalýdýr. */
    char ad1[] = "Ali";
    char ad2[] = "Ali";
    char ad3[] = "Aleyna";
    char ad4[] = "Zeynep";
    char ad5[] = "ali";

    cout << strcmp(ad1, ad2) << endl; // 0
    cout << strcmp(ad1, ad3) << endl; // Pozitif bir sayý (genellikle 1): 'i' (105) > 'e' (101)
    cout << strcmp(ad1, ad4) << endl; // Negatif bir sayý (genellikle -1): 'A' (65) < 'Z' (90)
    cout << strcmp(ad1, ad5) << endl; // Negatif bir sayý (genellikle -1): 'A' (65) < 'a' (97)

    // Büyük harfler küçük harflerden önce geldiði için "Ali" ile "ali" ayný deðildir.

    // Ýki metnin ayný olup olmadýðý strcmp sonucunun 0 olmasýyla anlaþýlýr.
    if (strcmp(ad1, ad2) == 0)
    {
        cout << "Metinler ayný" << endl;
    }

    /* ad1 == ad2 yazýlýrsa metinler ayný olsa bile sonuç false olur.
     * Bunun nedeni ileride iþaretçiler konusunda anlatýlacaktýr. */

    return 0;
}
