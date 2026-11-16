#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* Bilgisayar 1-100 arasında rastgele bir sayı tutar.
     * Kullanıcı sayıyı bulana kadar tahmin yapar ve
     * her tahminden sonra ipucu verilir.
     * Sayı rastgele üretildiği için oyun her seferinde farklıdır. */

    int tutulanSayi = rand() % 100 + 1;
    int tahmin;
    int denemeSayisi = 0;

    do
    {
        cout << "Tahmininiz (1-100): ";
        cin >> tahmin;

        denemeSayisi++;

        if (tahmin < tutulanSayi)
            cout << "Daha büyük bir sayı giriniz." << endl;
        else if (tahmin > tutulanSayi)
            cout << "Daha küçük bir sayı giriniz." << endl;
    } while (tahmin != tutulanSayi);

    cout << "Tebrikler! Sayıyı " << denemeSayisi << " denemede buldunuz." << endl;

    return 0;
}
