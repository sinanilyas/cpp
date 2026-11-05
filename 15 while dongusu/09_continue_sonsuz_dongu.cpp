#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayac = 1;

    while (sayac < 10)
    {
        // Sayaç artýrýlmadan continue yapýldýðý için
        // sayi=2 olduðunda sonsuz döngüye girer
        if (sayac % 2 == 0) continue;

        cout << sayac << endl;

        sayac++;
    }

    return 0;
}
