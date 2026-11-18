#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Çift týrnakla baþlangýç deðeri verilirken dizinin eleman sayýsý
     * yazýlýrsa metnin karakterleri ve null karakteri diziye sýðmalýdýr.
     * "Ali" metni için en az 4 eleman gerekir. */

    // HATA: Dizide null karakteri için yer yok.
    char ad[3] = "Ali";

    cout << ad << endl;

    /* Eleman sayýsý daha büyük yazýlabilir. char ad[10] = "Ali";
     * tanýmlamasýnda kalan elemanlarýn hepsi null karakteri olur. */

    return 0;
}
