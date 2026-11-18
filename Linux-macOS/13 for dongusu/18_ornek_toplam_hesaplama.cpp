#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü kullanılarak sayıların toplamı hesaplanabilir.
     * Toplamı tutacak değişken başlangıçta 0 yapılır.
     * Her tekrarda döngü değişkeninin değeri
     * toplam değişkenine eklenir. */

    int toplam = 0;

    for (int i = 1; i <= 10; i++)
    {
        toplam += i;
    }

    cout << "Toplam: " << toplam << endl; // 55

    return 0;
}
