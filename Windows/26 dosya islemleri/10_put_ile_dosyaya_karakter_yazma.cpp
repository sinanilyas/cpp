#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    ofstream dosya("alfabe.txt");

    if (dosya.is_open())
    {
        /* put fonksiyonu dosyaya tek bir karakter yazar.
         * dosya.put(harf) ile dosya << harf aynı işi yapar. */
        for (char harf = 'A'; harf <= 'Z'; harf++)
        {
            dosya.put(harf);
        }

        dosya.put('\n');

        dosya.close();

        cout << "alfabe.txt dosyasına yazıldı." << endl;
    }
    else
    {
        cout << "alfabe.txt açılamadı." << endl;
    }

    /* alfabe.txt dosyasının içeriği:
     * ABCDEFGHIJKLMNOPQRSTUVWXYZ
     *
     * Türkçe harfler birden fazla bayt kapladığı için put ile tek bir
     * karakter olarak yazılamaz. */

    return 0;
}
