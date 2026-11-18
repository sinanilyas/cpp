#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* time(0) veya time(NULL), 01.01.1970 00:00:00'dan (UTC)
     * bu yana geçen saniye sayısını verir.
     * time() fonksiyonunu kullanmak için <ctime> dosyası
     * programa dahil edilmelidir. */

    cout << time(0) << endl;    // Örneğin 15.11.2026 12:17'de 1794734220
    cout << time(NULL) << endl; // time(0) ile aynı değer

    // Geçen süre yaklaşık olarak yıla çevrilirse
    cout << time(0) / (365 * 24 * 60 * 60) << endl; // 56 (1970 + 56 = 2026)

    /* Bu değer her saniye 1 artar. Bu yüzden program
     * her çalıştırıldığında farklı bir değer elde edilir. */

    return 0;
}
