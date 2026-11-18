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

    /* İlk koşul true ise ikinci koşul ne olursa olsun
     * sonuç true olacaktır. Bu yüzden ilk koşulun true
     * olması durumunda ikinci koşul hiç kontrol edilmez.
     */

    // Kullanıcı 0 girdiğinde sayi == 0 koşulu true olur.
    // Bu nedenle 100 / sayi işlemi yapılmaz
    // ve sıfıra bölme hatası önlenir.
    if (sayi == 0 || 100 / sayi > 10)
        cout << "Koşul doğrudur." << endl;
    else
        cout << "Koşul yanlıştır." << endl;

    return 0;
}
