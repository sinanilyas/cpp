#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Fibonacci dizisinde ilk iki sayı 0 ve 1'dir.
     * Sonraki her sayı kendisinden önceki iki sayının toplamıdır.
     * Örnek: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
     */

    int adet;
    long long siradaki = 0, birSonraki = 1;

    cout << "Kaç Fibonacci sayısı yazdırılsın (1-47)? ";
    cin >> adet;

    for (int i = 1; i <= adet; i++)
    {
        cout << siradaki << " ";

        long long ikiSonraki = siradaki + birSonraki;

        // Sonraki adım için kaydırma yapılıyor
        siradaki = birSonraki;
        birSonraki = ikiSonraki;
    }

    return 0;
}
