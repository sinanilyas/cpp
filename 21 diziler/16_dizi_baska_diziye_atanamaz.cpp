#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int notlar[3] = {70, 85, 90};
    int yedek[3];

    /* Bir dizi, atama iþleciyle baþka bir diziye kopyalanamaz.
     * Yapý deðiþkenlerinin aksine diziler topluca atanamaz. */

    // HATA: Dizi baþka bir diziye atanamaz.
    yedek = notlar;

    cout << yedek[0] << endl;

    /* Elemanlar döngü ile tek tek kopyalanmalýdýr:
     *
     *     for (int i = 0; i < 3; i++)
     *     {
     *         yedek[i] = notlar[i];
     *     }
     */

    return 0;
}
