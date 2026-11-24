#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
