#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir iþlemin sonucu, atandýðý deðiþkenin tipine göre belirlenmez.
     * Önce iþlem gerçekleþtirilir, ardýndan elde edilen sonuç
     * gerekirse deðiþkenin tipine dönüþtürülür. */

    // Önce int bölmesi yapýlýr, sonuç 2 olur.
    // Sonra double tipine dönüþtürüp 2.0 olarak atanýr.
    double s1 = 5 / 2;

    // Önce 2 deðeri double tipine dönüþtürülür, double bölmesi yapýlýr, sonuç 2.5 olur
    // Sonra sonuç tip dönüþümü olmadan 2.5 olarak atanýr.
    double s2 = 5.0 / 2;

    cout << fixed << setprecision(2); // Sabit noktayý hep göster
    cout << s1 << endl; // 2.00
    cout << s2 << endl; // 2.50

    return 0;
}
