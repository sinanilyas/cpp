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

    cout << strcmp(ad1, ad2) << endl; // 0 (Metinler aynı)
    cout << strcmp(ad1, ad3) << endl; // Pozitif bir sayı (Ali, Aleyna'dan sonra gelir)
    cout << strcmp(ad1, ad4) << endl; // Negatif bir sayı (Ali, Zeynep'ten önce gelir)
    cout << strcmp(ad1, ad5) << endl; // Negatif bir sayı (büyük harfler küçük harflerden önce gelir)

    return 0;
}
