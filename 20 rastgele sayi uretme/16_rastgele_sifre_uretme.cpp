#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum KarakterTuru { Rakam, KucukHarf, BuyukHarf };

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    unsigned short karakterSayisi;
    cout << "Þifredeki karakter sayýsý: ";
    cin >> karakterSayisi;

    for (int i = 0; i < karakterSayisi; i++)
    {
        KarakterTuru tur = static_cast<KarakterTuru>(rand() % 3);

        char karakter;

        switch(tur)
        {
            case Rakam:
                karakter = rand() % 10 + '0';
                break;
            case KucukHarf:
                karakter = rand() % 26 + 'a';
                break;
            case BuyukHarf:
                karakter = rand() % 26 + 'A';
                break;
        }

        cout << karakter;
    }
    cout << endl;

    return 0;
}
