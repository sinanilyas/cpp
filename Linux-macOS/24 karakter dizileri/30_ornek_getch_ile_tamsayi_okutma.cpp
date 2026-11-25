#include <iostream>
#include <cctype>  // isdigit için
#include <cstdlib> // atoi için
#include <conio.h> // _getch için
using namespace std;

int main(int argc, char** argv)
{
    /* Basılan tuşlar _getch ile tek tek okunur. Yalnızca rakamlar ekrana
     * yazdırılır ve diziye eklenir, diğer tuşlar yok sayılır. Böylece
     * kullanıcının harf ya da başka bir karakter girmesi engellenir.
     * Enter tuşuna basıldığında ya da dizi dolduğunda okuma biter ve
     * rakamlardan oluşan metin atoi ile sayıya dönüştürülür.
     *
     * conio.h Linux ve macOS'ta bulunmadığı için bu örnek bu sistemlerde
     * derlenmez. */
    const int UZUNLUK = 5;
    char rakamlar[UZUNLUK];
    int siraNo = 0;

    cout << "Bir tamsayı giriniz: ";

    while (true)
    {
        /* Türkçe harflerin baytları 127'den büyüktür ve char tipinde negatif
         * sayı olarak saklanır. isdigit komutuna negatif sayı verilmemesi için
         * karakter unsigned char tipinde saklanıyor. */
        unsigned char karakter = _getch();

        bool enterMi = karakter == '\r';

        if (enterMi)
        {
            break; // Enter tuşuna basılmışsa sayı okumayı bitir
        }

        if (isdigit(karakter))
        {
            cout << karakter;
            rakamlar[siraNo++] = karakter;

            // Son eleman null karakteri için ayrıldığı için en fazla UZUNLUK - 1 rakam okunur
            bool diziDolduMu = siraNo == UZUNLUK - 1;

            if (diziDolduMu)
            {
                break; // Dizi dolduysa sayı okumayı bitir
            }
        }
    }

    rakamlar[siraNo] = '\0'; // Okunan son rakamdan sonra null karakteri yerleştirilir

    int sayi = atoi(rakamlar);

    cout << endl << "Girilen sayı: " << sayi << endl;

    return 0;
}
