#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char metin[] = "Merhaba dunya, nasilsin?";

    /* Karakter dizilerinde döngü koþulu olarak dizinin eleman sayýsý
     * yerine null karakteri kullanýlabilir. Döngü null karakterine
     * gelene kadar döner. Böylece metnin uzunluðu bilinmeden bütün
     * karakterler dolaþýlýr.
     *
     * Küçük harfler ASCII tablosunda büyük harflerden 32 ('a' - 'A')
     * sonraki konumda yer alýr. Küçük bir harften bu fark çýkarýlýrsa harfin
     * büyüðü elde edilir. Harf olmayan karakterler deðiþtirilmez. */
    for (int i = 0; metin[i] != '\0'; i++)
    {
        // Küçük harf ise
        if (metin[i] >= 'a' && metin[i] <= 'z')
        {
            metin[i] -= 'a' - 'A';
        }
    }

    cout << metin << endl; // MERHABA DUNYA, NASILSIN?

    /* Türkçe harfler (ç, ð, ý, ö, þ, ü) a-z aralýðýnda
     * olmadýðý için bu örnekte dönüþtürülmez. */

    return 0;
}
