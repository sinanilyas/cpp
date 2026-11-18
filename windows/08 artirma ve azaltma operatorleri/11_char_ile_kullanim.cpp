#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    char karakter = 'A';

    // Karakterin kod deðeri 1 artýrýlýr
    karakter++;

    cout << karakter << endl; // B

    /* ++ ve -- operatörleri char tipindeki
     * deðiþkenlerle de kullanýlabilir.
     *
     * 'A' karakterinin ASCII kodu 65,
     * 'B' karakterinin ASCII kodu 66'dýr.
     *
     * Artýrma ve azaltma iþlemleri karakterlerin
     * sayýsal kod deðerleri üzerinde gerçekleþtirilir.
     */

    return 0;
}
