#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Kullanıcıdan alınan 10 tamsayının kaçının pozitif,
     * kaçının negatif ve kaçının sıfır olduğu hesaplanır.
     * Her durum için ayrı bir sayaç kullanılır. */

    int sayi;
    int pozitif = 0, negatif = 0, sifir = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << ". sayıyı giriniz: ";
        cin >> sayi;

        if (sayi > 0) pozitif++;
        else if (sayi < 0) negatif++;
        else sifir++;
    }

    cout << "Pozitif sayı adedi: " << pozitif << endl;
    cout << "Negatif sayı adedi: " << negatif << endl;
    cout << "Sıfır adedi: " << sifir << endl;

    return 0;
}
