#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dizi, ayný tipteki birden fazla deðeri tek bir isim altýnda
     * saklamak için kullanýlýr. Dizideki her bir deðere eleman denir.
     *
     * Tanýmlama biçimi:  tip diziAdi[elemanSayisi];
     *
     * Aþaðýdaki tanýmlama, 10 tane int deðer saklayabilen sayilar
     * adýnda bir dizi oluþturur. sayi1, sayi2, ..., sayi10 gibi
     * 10 ayrý deðiþken tanýmlamak yerine tek bir dizi tanýmlanýr. */
    int sayilar[10];

    /* Dizi tanýmlandýðýnda bütün elemanlarý için bellekte
     * art arda yer ayrýlýr: 10 * sizeof(int) bayt. */
    cout << sizeof(sayilar) << endl; // Genellikle 40

    // Farklý tiplerde diziler de tanýmlanabilir.
    double fiyatlar[3];

    cout << sizeof(fiyatlar) << endl; // Genellikle 24

    /* Baþlangýç deðeri verilmediði için bu dizilerin elemanlarý
     * belirsiz deðerler içerir. */

    return 0;
}
