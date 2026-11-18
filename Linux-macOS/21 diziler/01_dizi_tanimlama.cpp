#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Dizi, aynı tipteki birden fazla değeri tek bir isim altında
     * saklamak için kullanılır. Dizideki her bir değere eleman denir.
     *
     * Tanımlama biçimi:  tip diziAdi[elemanSayisi];
     *
     * Aşağıdaki tanımlama, 10 tane int değer saklayabilen sayilar
     * adında bir dizi oluşturur. sayi1, sayi2, ..., sayi10 gibi
     * 10 ayrı değişken tanımlamak yerine tek bir dizi tanımlanır. */
    int sayilar[10];

    /* Dizi tanımlandığında bütün elemanları için bellekte
     * art arda yer ayrılır: 10 * sizeof(int) bayt. */
    cout << sizeof(sayilar) << endl; // Genellikle 40

    // Farklı tiplerde diziler de tanımlanabilir.
    double fiyatlar[3];

    cout << sizeof(fiyatlar) << endl; // Genellikle 24

    /* Başlangıç değeri verilmediği için bu dizilerin elemanları
     * belirsiz değerler içerir. */

    return 0;
}
