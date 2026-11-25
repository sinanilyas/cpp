#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    ifstream dosya("ogrenciler.txt");

    if (dosya.is_open())
    {
        string satir;

        // İlk satırı oku ve ekrana yaz
        getline(dosya, satir);
        cout << satir << endl;

        // İkinci satırı oku ve ekrana yaz
        getline(dosya, satir);
        cout << satir << endl;

        dosya.close();
    }
    else
    {
        cout << "ogrenciler.txt açılamadı." << endl;
    }

    /* Ekran çıktısı:
     * Ali Kaya
     * Zeynep Demir
     */

    return 0;
}
