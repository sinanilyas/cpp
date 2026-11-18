#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* continue komutundan önceki komutlar normal þekilde çalýþtýrýlýr.
     * continue komutuyla karþýlaþýldýðýnda ise döngü gövdesindeki
     * sonraki komutlar atlanýr ve bir sonraki tekrara geçilir. */

    for (int i = 1; i <= 5; i++)
    {
        cout << "Baþlangýç: " << i << endl;

        if (i == 3) continue;

        cout << "Bitiþ: " << i << endl;
    }

    return 0;
}
