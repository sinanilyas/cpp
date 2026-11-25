#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Değeri program çalışırken belli olan
     * bir değişkenle dizi tanımlanmamalıdır. */

    int n;
    cout << "Eleman sayısı: ";
    cin >> n;

    int dizi[n];

    cout << n << " elemanlı dizi oluşturuldu." << endl;

    /* Standart C++ bu kullanıma izin vermez. Bazı derleyiciler
     * bu kodu derlese de bazıları hata verir. */

    return 0;
}
