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

    // && operatörü || operatöründen daha önceliklidir.
    if (sayi == 30 || sayi >= 10 && sayi <= 20)
        cout << "Sayı 30'dur veya 10-20 arasındadır." << endl;
    else
        cout << "Sayı belirtilen koşulları sağlamıyor." << endl;

    /* Burada sayi = 30 olduğunda:
        sayi == 30 || (sayi >= 10 && sayi <= 20) -> true
        (sayi == 30 || sayi >= 10) && sayi <= 20 -> false
     */

    return 0;
}
