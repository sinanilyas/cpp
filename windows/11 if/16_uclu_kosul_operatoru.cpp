#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi1, sayi2;

    cout << "Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "İkinci sayıyı giriniz: ";
    cin >> sayi2;

    // Koşul doğru ise büyük değişkenine sayi1,
    // değilse sayi2 atanır
    int buyuk = (sayi1 > sayi2) ? sayi1 : sayi2;

    /* Yukarıdaki ifade aşağıdaki ifade ile eşdeğerdir:
     *
     * if (sayi1 > sayi2)
     *     buyuk = sayi1;
     * else
     *     buyuk = sayi2;
     */

    cout << "Büyük sayı: " << buyuk << endl;

    return 0;
}
