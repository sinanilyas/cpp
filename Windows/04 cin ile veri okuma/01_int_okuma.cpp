#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    /* cin ile değer okunurken kullanıcının uygun bir değer
     * gireceği varsayılır.
     *
     * Girilen değerin tipi, değişkenin tipine uygun olmalıdır.
     * Örneğin int tipindeki bir değişkene girilen değerler
     * aşağıdaki gibi atanır.
     *
     * 15         -> 15
     *   15       -> 15
     * 15.9       -> 15
     * 9000000000 -> 2147483647
     * 15Abc      -> 15
     * Abc        -> 0
     *
     * Uygun olmayan girdilerde okuma işlemi başarısız olabilir.
     */

    cout << "Girdiğiniz sayı: " << sayi << endl;

    return 0;
}
