#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* rand() fonksiyonu, tohum deðeri (seed) adý verilen bir
     * baþlangýç sayýsýndan yola çýkarak hesapladýðý sayýlarý üretir.
     * srand() fonksiyonu bu tohum deðerini belirler.
     *
     * srand() hiç çaðrýlmazsa tohum deðeri 1 kabul edilir.
     * Önceki örneklerde hep ayný sayýlarýn üretilmesinin nedeni budur. */

    srand(5);

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Tohum deðeri 1'den farklý olduðu için srand() kullanýlmayan
     * örneklerden farklý sayýlar üretilir.
     * Genellikle: 54, 28693, 12255, 24449, 27660
     *
     * srand(5) yerine srand(1) yazýlýrsa srand() kullanýlmayan
     * örneklerdeki sayýlarýn aynýsý üretilir.
     *
     * Ancak srand() fonksiyonuna sabit bir sayý verildiði için
     * program her çalýþtýrýldýðýnda yine ayný sayýlar üretilir. */

    return 0;
}
