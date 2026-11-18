#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    char metin[] = "Merhaba dunya, nasilsin?";

    /* Karakter dizilerinde döngü koşulu olarak dizinin eleman sayısı
     * yerine null karakteri kullanılabilir. Döngü null karakterine
     * gelene kadar döner. Böylece metnin uzunluğu bilinmeden bütün
     * karakterler dolaşılır.
     *
     * Küçük harfler ASCII tablosunda büyük harflerden 32 ('a' - 'A')
     * sonraki konumda yer alır. Küçük bir harften bu fark çıkarılırsa harfin
     * büyüğü elde edilir. Harf olmayan karakterler değiştirilmez. */
    for (int i = 0; metin[i] != '\0'; i++)
    {
        // Küçük harf ise
        if (metin[i] >= 'a' && metin[i] <= 'z')
        {
            metin[i] -= 'a' - 'A';
        }
    }

    cout << metin << endl; // MERHABA DUNYA, NASILSIN?

    /* Türkçe harfler (ç, ğ, ı, ö, ş, ü) a-z aralığında
     * olmadığı için bu örnekte dönüştürülmez. */

    return 0;
}
