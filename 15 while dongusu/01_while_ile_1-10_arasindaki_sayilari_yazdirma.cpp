#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayac = 1;

    // Koþul doðru olduðu sürece döngü tekrarlanýr.
    while (sayac <= 10)
    {
        cout << sayac << endl;
        sayac++; // Sayaç artýrýlmazsa döngü sonsuza kadar devam eder.
    }

    return 0;
}
