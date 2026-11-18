#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* rand() fonksiyonu, tohum değeri (seed) adı verilen bir
     * başlangıç sayısından yola çıkarak hesapladığı sayıları üretir.
     * srand() fonksiyonu bu tohum değerini belirler.
     *
     * srand() hiç çağrılmazsa tohum değeri 1 kabul edilir.
     * Önceki örneklerde hep aynı sayıların üretilmesinin nedeni budur. */

    srand(5);

    for (int i = 1; i <= 5; i++)
    {
        cout << rand() << endl;
    }

    /* Tohum değeri 1'den farklı olduğu için srand() kullanılmayan
     * örneklerden farklı sayılar üretilir.
     * Genellikle: 54, 28693, 12255, 24449, 27660
     *
     * srand(5) yerine srand(1) yazılırsa srand() kullanılmayan
     * örneklerdeki sayıların aynısı üretilir.
     *
     * Ancak srand() fonksiyonuna sabit bir sayı verildiği için
     * program her çalıştırıldığında yine aynı sayılar üretilir. */

    return 0;
}
