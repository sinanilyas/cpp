#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* is ile başlayan komutlar, sınanan koşul doğruysa 0'dan farklı bir
     * tamsayı, yanlışsa 0 verir. Koşul doğru olduğunda verilen sayı her
     * zaman 1 değildir. Sayı işletim sistemine ve derleyiciye göre
     * değişebilir. */

    cout << isalpha('R') << endl; // 0'dan farklı bir sayı
    cout << isalpha('r') << endl; // 0'dan farklı bir sayı
    cout << isalpha('7') << endl; // 0

    /* bool tipi 0 dışındaki bütün sayıları 1 olarak sakladığı için sonuç
     * bool tipli bir değişkene atanırsa her sistemde 1 ya da 0 elde edilir. */
    bool sonuc = isalpha('R');

    cout << sonuc << endl; // 1

    return 0;
}
