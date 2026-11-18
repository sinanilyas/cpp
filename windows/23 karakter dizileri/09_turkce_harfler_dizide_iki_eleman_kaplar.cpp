#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Örnek programlar UTF-8 kodlamasıyla kaydedilmiştir. Bu kodlamada
     * Türkçe harfler (ç, ğ, ı, ö, ş, ü...) karakter dizisinde birer değil
     * ikişer eleman yer kaplar. Bu nedenle sizeof Türkçe harfli
     * metinlerde harf sayısından büyük sonuç verir. */
    char ad1[] = "Sule";
    char ad2[] = "Şule";

    cout << sizeof(ad1) << endl; // 5
    cout << sizeof(ad2) << endl; // 6

    /* Aynı nedenle diziye daha az Türkçe harf sığar ve Türkçe harfli
     * metinlerde setw ile yapılan hizalama kayabilir. Tek bir char
     * değişkenine Türkçe harf atanması da beklenen sonucu vermez. */

    return 0;
}
