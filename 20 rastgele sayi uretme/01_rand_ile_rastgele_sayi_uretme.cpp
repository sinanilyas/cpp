#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* rand() fonksiyonu rastgele bir tamsayý üretir.
     * rand() fonksiyonunu kullanmak için <cstdlib> dosyasý
     * programa dahil edilmelidir.
     *
     * Bazý derleyicilerde <cstdlib> yazýlmasa da program derlenebilir,
     * çünkü <iostream> bu dosyayý dolaylý olarak dahil edebilir.
     * Ancak buna güvenilmemeli, <cstdlib> her zaman yazýlmalýdýr. */

    cout << rand() << endl; // Genellikle 41

    /* Program tekrar tekrar çalýþtýrýldýðýnda
     * her seferinde ayný sayý üretilir.
     *
     * rand() fonksiyonunun ürettiði sayýlar derleyiciye ve
     * iþletim sistemine göre farklý olabilir. */

    return 0;
}
