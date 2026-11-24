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

    // Çoklu koşulun tamamının tersi alınır.
    if (!(sayi >= 10 && sayi <= 20))
        cout << "Sayı 10-20 aralığının dışındadır." << endl;

    // Çoklu koşulun tersi, karşılaştırma operatörleri
    // ve mantıksal operatörler tersine çevrilerek de yazılabilir.
    if (sayi < 10 || sayi > 20)
        cout << "Sayı 10-20 aralığının dışındadır." << endl;

    return 0;
}
