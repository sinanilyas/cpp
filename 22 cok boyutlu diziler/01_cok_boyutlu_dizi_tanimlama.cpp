#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Elemanlarýna birden fazla indisle eriþilen dizilere çok boyutlu
     * dizi denir. Ýki boyutlu bir dizi, satýrlardan ve sütunlardan
     * oluþan bir tablo (matris) gibi düþünülebilir.
     *
     * Tanýmlama biçimi:  tip diziAdi[satirSayisi][sutunSayisi];
     *
     * Aþaðýdaki tanýmlama 3 satýr ve 2 sütundan oluþan, toplam
     * 3 * 2 = 6 tane int deðer saklayabilen matris adýnda bir dizi
     * oluþturur. */
    int matris[3][2];

    /* Bütün elemanlar için bellekte art arda yer ayrýlýr:
     * 3 * 2 * sizeof(int) bayt. */
    cout << sizeof(matris) << endl; // Genellikle 24

    // Farklý tiplerde ve boyutlarda çok boyutlu diziler de tanýmlanabilir.
    double tablo[4][5]; // 4 satýr, 5 sütun, 20 eleman

    cout << sizeof(tablo) << endl; // Genellikle 160

    /* Baþlangýç deðeri verilmediði için bu dizilerin elemanlarý
     * belirsiz deðerler içerir. */

    return 0;
}
