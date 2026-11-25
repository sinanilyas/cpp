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

        /* getline bir koşul olarak yazıldığında satır okunabildiyse koşul
         * doğru, dosyanın sonuna gelindiği için okunamadıysa yanlış olur.
         * Böylece döngü bütün satırları okur ve dosyanın sonunda durur. */
        while (getline(dosya, satir))
        {
            cout << satir << endl;
        }

        dosya.close();
    }
    else
    {
        cout << "ogrenciler.txt açılamadı." << endl;
    }

    /* Ekran çıktısı:
     * Ali Kaya
     * Zeynep Demir
     * Mehmet Can
     * Elif Tekin
     */

    return 0;
}
