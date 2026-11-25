#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
    ifstream dosya("ogrenciler.txt");

    if (dosya.is_open())
    {
        char karakter;
        int karakterSayisi = 0;

        /* get fonksiyonu dosyadan bir karakter okur ve parantez içindeki
         * değişkene atar. >> işlecinden farklı olarak boşlukları ve satır
         * sonlarını da okur.
         *
         * get bir koşul olarak yazıldığında karakter okunabildiyse koşul
         * doğru, dosyanın sonuna gelindiyse yanlış olur. */
        while (dosya.get(karakter))
        {
            cout << karakter;
            karakterSayisi++;
        }

        cout << "Karakter sayısı: " << karakterSayisi << endl;

        dosya.close();
    }
    else
    {
        cout << "ogrenciler.txt açılamadı." << endl;
    }

    /* Ekran çıktısı:
     * Ali Kaya
     * Zeynep Demir
     * Mehmet Can
     * Elif Tekin
     * Karakter sayısı: 44
     *
     * Satır sonları da okunduğu için dosya ekrana aynen yazdırılır.
     * Dört satır sonu karakteri de sayıya dâhil edilir. */

    return 0;
}
