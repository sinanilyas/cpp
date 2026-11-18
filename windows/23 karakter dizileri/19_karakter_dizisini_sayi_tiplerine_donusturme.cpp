#include <iostream>
#include <cstdlib> // atoi, atol ve atof için
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Karakter dizisindeki bir metin <cstdlib> içindeki fonksiyonlarla
     * sayýya dönüþtürülebilir:
     *   atoi: int
     *   atol: long
     *   atof: double
     *
     * Baþtaki boþluklar atlanýr. Dönüþtürme, sayýya ait olmayan ilk
     * karakterde durur. Metin bir sayýyla baþlamýyorsa 0 döndürülür. */
    char metin1[] = "123";
    char metin2[] = "   -456";
    char metin3[] = "abc123";
    char metin4[] = "789xyz";

    cout << "atoi(" << metin1 << ")\t: " << atoi(metin1) << endl; // 123
    cout << "atoi(" << metin2 << ")\t: " << atoi(metin2) << endl; // -456
    cout << "atoi(" << metin3 << ")\t: " << atoi(metin3) << endl; // 0 (sayý olmayan bir karakterle baþlýyor)
    cout << "atoi(" << metin4 << ")\t: " << atoi(metin4) << endl; // 789 ('x' görünce durur)

    char metin5[] = "123456";
    long sayi5 = atol(metin5);
    cout << "atol(" << metin5 << ")\t: " << sayi5 << endl; // 123456

    /* atof, ondalýk ayýrýcý olarak programýn dil ayarýndaki karakteri
     * kullanýr. setlocale ile Türkçe seçildiði için nokta yerine virgül
     * yazýlmalýdýr. cout bu ayardan etkilenmez ve noktayla yazdýrýr. */
    char metin6[] = "3,14";
    double sayi6 = atof(metin6);
    cout << "atof(" << metin6 << ")\t: " << sayi6 << endl; // Genellikle 3.14

    char metin7[] = "3.14";
    double sayi7 = atof(metin7);
    cout << "atof(" << metin7 << ")\t: " << sayi7 << endl; // Genellikle 3 (noktada durur)

    return 0;
}
