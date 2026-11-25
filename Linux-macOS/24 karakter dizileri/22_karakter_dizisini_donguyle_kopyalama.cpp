#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";
    char kopya[UZUNLUK];

    /* Diziler atama yapılarak kopyalanamaz:
     *     kopya = metin; // HATA
     */

    // Döngü ile her eleman teker teker kopyalanabilir
    for (int i = 0; i < UZUNLUK; i++)
    {
        kopya[i] = metin[i];
    }

    cout << kopya << endl; // Selam

    return 0;
}
