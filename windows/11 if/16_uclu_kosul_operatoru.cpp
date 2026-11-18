#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi1, sayi2;

    cout << "Birinci sayýyý giriniz: ";
    cin >> sayi1;

    cout << "Ýkinci sayýyý giriniz: ";
    cin >> sayi2;

    // Koþul doðru ise büyük deðiþkenine sayi1,
    // deðilse sayi2 atanýr
    int buyuk = (sayi1 > sayi2) ? sayi1 : sayi2;

    /* Yukarýdaki ifade aþaðýdaki ifade ile eþdeðerdir:
     *
     * if (sayi1 > sayi2)
     *     buyuk = sayi1;
     * else
     *     buyuk = sayi2;
     */

    cout << "Büyük sayý: " << buyuk << endl;

    return 0;
}
