#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    ofstream dosya("tablo.txt");

    if (dosya.is_open())
    {
        /* cout ile kullanılan setw, left, fixed ve setprecision gibi
         * manipülatörler dosyalarda da aynı şekilde kullanılır. */
        dosya << left;
        dosya << setw(10) << "Ad" << "Ortalama" << endl;

        dosya << fixed << setprecision(1);
        dosya << setw(10) << "Ali" << 72.5 << endl;
        dosya << setw(10) << "Zeynep" << 88.0 << endl;
        dosya << setw(10) << "Mehmet" << 64.7 << endl;

        // Türkçe harfler birden fazla bayt kapladığı için setw ile hizalama kayabilir.

        dosya.close();

        cout << "tablo.txt dosyasına yazıldı." << endl;
    }
    else
    {
        cout << "tablo.txt açılamadı." << endl;
    }

    /* tablo.txt dosyasının içeriği:
     * Ad        Ortalama
     * Ali       72.5
     * Zeynep    88.0
     * Mehmet    64.7
     */

    return 0;
}
