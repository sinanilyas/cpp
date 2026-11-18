#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    /* cin ile deðer okunurken kullanýcýnýn uygun bir deðer
     * gireceði varsayýlýr.
     *
     * Girilen deðerin tipi, deðiþkenin tipine uygun olmalýdýr.
     * Örneðin int tipindeki bir deðiþkene girilen deðerler
     * aþaðýdaki gibi atanýr.
     *
     * 15         -> 15
     *   15       -> 15
     * 15.9       -> 15
     * 9000000000 -> 2147483647
     * 15Abc      -> 15
     * Abc        -> 0
     *
     * Uygun olmayan girdilerde okuma iþlemi baþarýsýz olabilir.
     */

    cout << "Girdiðiniz sayý: " << sayi << endl;

    return 0;
}
