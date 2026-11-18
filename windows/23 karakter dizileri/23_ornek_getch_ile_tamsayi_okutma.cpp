#include <iostream>
#include <cctype>  // isdigit için
#include <cstdlib> // atoi için
#include <conio.h> // _getch için
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Basýlan tuþlar _getch ile tek tek okunur. Yalnýzca rakamlar ekrana
     * yazdýrýlýr ve diziye eklenir, diðer tuþlar yok sayýlýr. Böylece
     * kullanýcýnýn harf ya da baþka bir karakter girmesi engellenir.
     * Enter tuþuna basýldýðýnda ya da dizi dolduðunda okuma biter ve
     * rakamlardan oluþan metin atoi ile sayýya dönüþtürülür. */
    const int UZUNLUK = 5;
    char rakamlar[UZUNLUK];
    int siraNo = 0;

    cout << "Bir tamsayý giriniz: ";

    while (true)
    {
        // Türkçe harflerde isdigit fonksiyonuna negatif sayý verilmemesi için unsigned char kullanýlýyor
        unsigned char karakter = _getch();

        bool enterMi = karakter == '\r';

        if (enterMi)
        {
            break; // Enter tuþuna basýlmýþsa sayý okumayý bitir
        }

        if (isdigit(karakter))
        {
            cout << karakter;
            rakamlar[siraNo++] = karakter;

            // Son eleman null karakteri için ayrýldýðý için en fazla UZUNLUK - 1 rakam okunur
            bool diziDolduMu = siraNo == UZUNLUK - 1;

            if (diziDolduMu)
            {
                break; // Dizi dolduysa sayý okumayý bitir
            }
        }
    }

    rakamlar[siraNo] = '\0'; // Okunan son rakamdan sonra null karakteri yerleþtirilir

    int sayi = atoi(rakamlar);

    cout << endl << "Girilen sayý: " << sayi << endl;

    return 0;
}
