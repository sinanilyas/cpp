#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* continue komutu, döngünün o anki tekrarında
     * kalan komutları atlayarak bir sonraki tekrara geçilmesini sağlar.
     * for döngüsünde önce artış bölümü çalıştırılır,
     * ardından koşul yeniden kontrol edilir. */

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) continue;

        cout << i << endl;
    }

    // Ekrana 6 hariç 1'den 10'a kadar olan sayılar yazdırılır.

    return 0;
}
