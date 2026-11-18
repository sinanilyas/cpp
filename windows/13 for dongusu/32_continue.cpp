#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* continue komutu, döngünün o anki tekrarýnda
     * kalan komutlarý atlayarak bir sonraki tekrara geçilmesini saðlar.
     * for döngüsünde önce artýþ bölümü çalýþtýrýlýr,
     * ardýndan koþul yeniden kontrol edilir. */

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) continue;

        cout << i << endl;
    }

    // Ekrana 6 hariç 1'den 10'a kadar olan sayýlar yazdýrýlýr.

    return 0;
}
