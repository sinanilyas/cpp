#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Deðeri program çalýþýrken belli olan
     * bir deðiþkenle dizi tanýmlanmamalýdýr. */

    int n;
    cout << "Eleman sayýsý: ";
    cin >> n;

    int dizi[n];

    cout << n << " elemanlý dizi oluþturuldu." << endl;

    /* Standart C++ bu kullanýma izin vermez. Bazý derleyiciler
     * bu kodu derlese de bazýlarý hata verir. */

    return 0;
}
