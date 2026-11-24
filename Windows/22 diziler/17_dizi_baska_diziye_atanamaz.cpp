#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int notlar[3] = {70, 85, 90};
    int yedek[3];

    /* Bir dizi, atama işleciyle başka bir diziye kopyalanamaz.
     * Yapı değişkenlerinin aksine diziler topluca atanamaz. */

    // HATA: Dizi başka bir diziye atanamaz.
    yedek = notlar;

    cout << yedek[0] << endl;

    /* Elemanlar döngü ile tek tek kopyalanmalıdır:
     *
     *     for (int i = 0; i < 3; i++)
     *     {
     *         yedek[i] = notlar[i];
     *     }
     */

    return 0;
}
