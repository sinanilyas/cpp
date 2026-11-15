#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int yas[3];

    yas[0] = 18;
    yas[1] = 20;
    yas[2] = 25;

    int a = 1;

    /* yas[a++] ifadesinde ++ iþleci a deðiþkenine uygulanýr.
     * Sonek kullanýldýðý için önce a'nýn mevcut deðeri indis olarak
     * kullanýlýr, ardýndan a 1 artýrýlýr.
     * Dizi elemanlarýnýn deðeri deðiþmez. */
    cout << yas[a++] << endl; // 20
    cout << a << endl;        // 2
    cout << yas[a] << endl;   // 25

    cout << yas[0] << " " << yas[1] << " " << yas[2] << endl; // 18 20 25

    /* yas[++a] yazýlsaydý önek kullanýldýðý için önce a 1 artýrýlýr,
     * sonra yeni indisteki elemana eriþilirdi. */

    return 0;
}
