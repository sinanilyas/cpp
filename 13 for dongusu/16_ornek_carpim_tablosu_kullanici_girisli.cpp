#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Çarpým tablosu oluþturulacak sayý kullanýcýdan alýnarak
     * döngü içerisinde kullanýlabilir. */

    int sayi;

    cout << "Çarpým tablosu oluþturulacak sayýyý giriniz: ";
    cin >> sayi;

    for (int i = 1; i <= 10; i++)
    {
        cout << sayi << " x " << i << " = " << sayi * i << endl;
    }

    return 0;
}
