#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* break komutundan önceki komutlar normal þekilde çalýþtýrýlýr.
     * break komutuyla karþýlaþýldýðýnda ise döngü sonlandýrýlýr. */
    for (int i = 1; i <= 5; i++)
    {
        cout << "Baþlangýç: " << i << endl;

        if (i == 3) break;

        cout << "Bitiþ: " << i << endl;
    }

    return 0;
}
