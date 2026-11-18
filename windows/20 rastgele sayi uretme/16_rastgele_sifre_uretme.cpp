#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

enum KarakterTuru { Rakam, KucukHarf, BuyukHarf };

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(0));

    unsigned short karakterSayisi;
    cout << "Şifredeki karakter sayısı: ";
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
