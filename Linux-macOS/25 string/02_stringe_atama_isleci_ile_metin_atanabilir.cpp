#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string ad = "Ali";

    cout << ad << endl; // Ali

    /* Karakter dizilerine tanımlamadan sonra metin atanamaz. string
     * değişkenine ise atama işleciyle (=) istenildiği zaman yeni bir metin
     * atanabilir. Yeni metin öncekinden uzun olsa da string gereken yeri
     * kendisi ayarlar. */
    ad = "Abdurrahman";

    cout << ad << endl; // Abdurrahman

    /* Bir string başka bir string'e de atanabilir. Karakter dizilerinde
     * kopyalama için döngü ya da strcpy gerekir. */
    string kopya;
    kopya = ad;

    cout << kopya << endl; // Abdurrahman

    /* Atamadan sonra iki değişken birbirinden bağımsızdır. Birinin
     * değiştirilmesi diğerini etkilemez. */

    return 0;
}
