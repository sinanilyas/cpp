#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Elemanlarına birden fazla indisle erişilen dizilere çok boyutlu
     * dizi denir. İki boyutlu bir dizi, satırlardan ve sütunlardan
     * oluşan bir tablo (matris) gibi düşünülebilir.
     *
     * Tanımlama biçimi:  tip diziAdi[satirSayisi][sutunSayisi];
     *
     * Aşağıdaki tanımlama 3 satır ve 2 sütundan oluşan, toplam
     * 3 * 2 = 6 tane int değer saklayabilen matris adında bir dizi
     * oluşturur. */
    int matris[3][2];

    /* Bütün elemanlar için bellekte art arda yer ayrılır:
     * 3 * 2 * sizeof(int) bayt. */
    cout << sizeof(matris) << endl; // Genellikle 24

    // Farklı tiplerde ve boyutlarda çok boyutlu diziler de tanımlanabilir.
    double tablo[4][5]; // 4 satır, 5 sütun, 20 eleman

    cout << sizeof(tablo) << endl; // Genellikle 160

    /* Başlangıç değeri verilmediği için bu dizilerin elemanları
     * belirsiz değerler içerir. */

    return 0;
}
