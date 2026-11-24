#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Örnek programlar UTF-8 kodlamasıyla kaydedilmiştir. Bu kodlamada
     * Türkçe harfler (ç, ğ, ı, ö, ş, ü...) karakter dizisinde birer değil
     * ikişer eleman yer kaplar. Bu nedenle "Şule", "Sule"den bir eleman
     * fazla yer kaplar. */
    char ad1[] = "Sule";
    char ad2[] = "Şule";

    cout << sizeof(ad1) << endl; // 5
    cout << sizeof(ad2) << endl; // 6

    /* Bu nedenle,
     * - Diziye İngiliz alfabesindeki harflere göre daha az Türkçe harf sığar.
     * - Türkçe harfli metinlerde setw ile yapılan hizalama kayabilir.
     * - Bir char değişkenine Türkçe harf atanması beklenen sonucu vermez. */

    return 0;
}
