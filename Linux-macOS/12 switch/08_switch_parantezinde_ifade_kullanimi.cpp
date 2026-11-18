#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    /* switch içerisinde yalnızca değişkenler değil,
     * sonuçları tamsayı olan ifadeler de kullanılabilir.
     * Örneğin kullanıcı 14 girerse 14 % 3 = 2 olduğundan
     * case 2 çalıştırılır. */

    switch (sayi % 3)
    {
        case 0:
            cout << "Sayı 3'e tam bölünür." << endl;
            break;
        case 1:
            cout << "Bölümden kalan 1'dir." << endl;
            break;
        case 2:
            cout << "Bölümden kalan 2'dir." << endl;
            break;
    }

    return 0;
}
