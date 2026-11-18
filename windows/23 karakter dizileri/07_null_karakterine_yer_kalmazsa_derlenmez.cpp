#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Çift tırnakla başlangıç değeri verilirken dizinin eleman sayısı
     * yazılırsa metnin karakterleri ve null karakteri diziye sığmalıdır.
     * "Ali" metni için en az 4 eleman gerekir. */

    // HATA: Dizide null karakteri için yer yok.
    char ad[3] = "Ali";

    cout << ad << endl;

    /* Eleman sayısı daha büyük yazılabilir. char ad[10] = "Ali";
     * tanımlamasında kalan elemanların hepsi null karakteri olur. */

    return 0;
}
