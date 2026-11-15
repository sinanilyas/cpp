#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* time(0) veya time(NULL), 01.01.1970 00:00:00'dan (UTC)
     * bu yana geçen saniye sayýsýný verir.
     * time() fonksiyonunu kullanmak için <ctime> dosyasý
     * programa dahil edilmelidir. */

    cout << time(0) << endl;    // Örneðin 15.11.2026 12:17'de 1794734220
    cout << time(NULL) << endl; // time(0) ile ayný deðer

    // Geçen süre yaklaþýk olarak yýla çevrilirse
    cout << time(0) / (365 * 24 * 60 * 60) << endl; // 56 (1970 + 56 = 2026)

    /* Bu deðer her saniye 1 artar. Bu yüzden program
     * her çalýþtýrýldýðýnda farklý bir deðer elde edilir. */

    return 0;
}
