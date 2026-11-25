#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Çarpım tablosu oluşturulacak sayı kullanıcıdan alınarak
     * döngü içerisinde kullanılabilir. */

    int sayi;

    cout << "Çarpım tablosu oluşturulacak sayıyı giriniz: ";
    cin >> sayi;

    for (int i = 1; i <= 10; i++)
    {
        cout << sayi << " x " << i << " = " << sayi * i << endl;
    }

    return 0;
}
