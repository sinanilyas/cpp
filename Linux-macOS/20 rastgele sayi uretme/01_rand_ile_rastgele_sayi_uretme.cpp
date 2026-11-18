#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    /* rand() fonksiyonu rastgele bir tamsayı üretir.
     * rand() fonksiyonunu kullanmak için <cstdlib> dosyası
     * programa dahil edilmelidir.
     *
     * Bazı derleyicilerde <cstdlib> yazılmasa da program derlenebilir,
     * çünkü <iostream> bu dosyayı dolaylı olarak dahil edebilir.
     * Ancak buna güvenilmemeli, <cstdlib> her zaman yazılmalıdır. */

    cout << rand() << endl; // Örneğin Windows'ta 41, Linux'ta 1804289383

    /* Program tekrar tekrar çalıştırıldığında
     * her seferinde aynı sayı üretilir.
     *
     * rand() fonksiyonunun ürettiği sayılar derleyiciye ve
     * işletim sistemine göre farklı olabilir. */

    return 0;
}
