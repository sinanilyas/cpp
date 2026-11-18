#include <iostream>
#include <cstring> // strcmp için
using namespace std;

int main(int argc, char** argv)
{
    /* strcmp(metin1, metin2) iki metni karakter karakter, ASCII
     * kodlarına göre karşılaştırır ve
     *   metinler aynıysa 0,
     *   metin1 sıralamada önce geliyorsa negatif bir sayı,
     *   metin1 sıralamada sonra geliyorsa pozitif bir sayı döndürür.
     *
     * Döndürülen sayının kendisi derleyiciye göre değişebilir.
     * Yalnızca 0 olup olmadığına ve işaretine bakılmalıdır. */
    char ad1[] = "Ali";
    char ad2[] = "Ali";
    char ad3[] = "Aleyna";
    char ad4[] = "Zeynep";
    char ad5[] = "ali";

    cout << strcmp(ad1, ad2) << endl; // 0
    cout << strcmp(ad1, ad3) << endl; // Pozitif bir sayı: 'i' (105) > 'e' (101)
    cout << strcmp(ad1, ad4) << endl; // Negatif bir sayı: 'A' (65) < 'Z' (90)
    cout << strcmp(ad1, ad5) << endl; // Negatif bir sayı: 'A' (65) < 'a' (97)

    // Büyük harfler küçük harflerden önce geldiği için "Ali" ile "ali" aynı değildir.

    // İki metnin aynı olup olmadığı strcmp sonucunun 0 olmasıyla anlaşılır.
    if (strcmp(ad1, ad2) == 0)
    {
        cout << "Metinler aynı" << endl;
    }

    /* ad1 == ad2 yazılırsa metinler aynı olsa bile sonuç false olur.
     * Bunun nedeni ileride işaretçiler konusunda anlatılacaktır. */

    return 0;
}
