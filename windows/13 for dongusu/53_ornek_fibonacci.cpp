#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Fibonacci dizisinde ilk iki sayý 0 ve 1'dir.
     * Sonraki her sayý kendisinden önceki iki sayýnýn toplamýdýr.
     * Örnek: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
     */

    int adet;
    long long siradaki = 0, birSonraki = 1;

    cout << "Kaç Fibonacci sayýsý yazdýrýlsýn (1-47)? ";
    cin >> adet;

    for (int i = 1; i <= adet; i++)
    {
        cout << siradaki << " ";

        long long ikiSonraki = siradaki + birSonraki;

        // Sonraki adým için kaydýrma yapýlýyor
        siradaki = birSonraki;
        birSonraki = ikiSonraki;
    }

    return 0;
}
