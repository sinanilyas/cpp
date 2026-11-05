#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char karakter = 'A';

    cout << karakter << endl; // A
    cout << static_cast<int>(karakter) << endl; // 65

    /* Bazý durumlarda, istenilen sonucu elde etmek için
     * açýk tip dönüþümü yapmak gerekir.
     * Örneðin cout, char tipindeki deðerleri karakter olarak yazdýrýr.
     * Sayýsal karþýlýðýný yazdýrmak için açýk dönüþüm yapýlabilir. */

    return 0;
}
