#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayac = 1;

    // Sayaç artýrýlmadýðý için koþul sürekli doðru kalýr.
    while (sayac <= 10)
    {
        cout << sayac << endl;
    }

    // Bu satýra hiçbir zaman ulaþýlamaz.
    cout << "Döngü sona erdi." << endl;

    return 0;
}
