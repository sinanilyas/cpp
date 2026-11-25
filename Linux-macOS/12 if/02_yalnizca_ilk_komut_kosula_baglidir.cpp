#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    /* Yalnızca ilk komut koşula bağlıdır. */

    if (sayi > 0)
        cout << "Sayı pozitiftir." << endl;
        cout << "Sayı sıfırdan büyüktür." << endl;

    /* İkinci cout koşuldan bağımsız olarak çalıştırılır. */

    return 0;
}
