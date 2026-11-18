#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Bir işlemin sonucu, atandığı değişkenin tipine göre belirlenmez.
     * Önce işlem gerçekleştirilir, ardından elde edilen sonuç
     * gerekirse değişkenin tipine dönüştürülür. */

    // Önce int bölmesi yapılır, sonuç 2 olur.
    // Sonra double tipine dönüştürüp 2.0 olarak atanır.
    double s1 = 5 / 2;

    // Önce 2 değeri double tipine dönüştürülür, double bölmesi yapılır, sonuç 2.5 olur
    // Sonra sonuç tip dönüşümü olmadan 2.5 olarak atanır.
    double s2 = 5.0 / 2;

    cout << fixed << setprecision(2); // Sabit noktayı hep göster
    cout << s1 << endl; // 2.00
    cout << s2 << endl; // 2.50

    return 0;
}
