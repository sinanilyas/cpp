#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string soyad = "Kaya";

    /* at fonksiyonu da [] gibi verilen indisteki karaktere erişir.
     * Karakter at ile de değiştirilebilir. */
    cout << soyad.at(0) << endl; // K

    soyad.at(0) = 'k';

    cout << soyad << endl; // kaya

    /* [] indisin metnin sınırları içinde olup olmadığını denetlemez.
     * Sınır dışındaki bir indis kullanılırsa dizilerde olduğu gibi anlamsız
     * bir değer okunabilir ya da program çökebilir. at ise indisi denetler.
     * İndis sınır dışındaysa program bir hata mesajıyla sonlanır. */
    cout << soyad.at(10) << endl; // MANTIK HATASI: 4 karakterlik metinde 10 indisli karakter yoktur

    cout << "Bu satır çalıştırılmaz." << endl;

    return 0;
}
