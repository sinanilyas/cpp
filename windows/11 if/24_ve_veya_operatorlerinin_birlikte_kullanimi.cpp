#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // && operatörü || operatöründen daha önceliklidir.
    if (sayi == 30 || sayi >= 10 && sayi <= 20)
        cout << "Sayý 30'dur veya 10-20 arasýndadýr." << endl;
    else
        cout << "Sayý belirtilen koþullarý saðlamýyor." << endl;

    /* Burada sayi = 30 olduðunda:
        sayi == 30 || (sayi >= 10 && sayi <= 20) -> true
        (sayi == 30 || sayi >= 10) && sayi <= 20 -> false
     */

    return 0;
}
