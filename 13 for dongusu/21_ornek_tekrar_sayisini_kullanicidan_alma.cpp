#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngünün tekrar sayýsý sabit olmak zorunda deðildir.
     * Kullanýcýdan alýnan bir deðer de döngü koþulunda
     * kullanýlabilir. */

    int adet;

    cout << "Kaç kez Merhaba yazdýrýlsýn? ";
    cin >> adet;

    for (int i = 0; i < adet; i++)
    {
        cout << i+1 << ". Merhaba" << endl;
    }

    return 0;
}
