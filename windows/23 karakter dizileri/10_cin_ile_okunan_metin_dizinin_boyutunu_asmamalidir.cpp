#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* 6 elemanlı diziye en fazla 5 karakterlik bir metin okunabilir.
     * Son eleman null karakteri için gereklidir. */
    char ad[6];

    cout << "Adınızı giriniz: ";
    cin >> ad; // MANTIK HATASI: Girilen metin uzunsa dizinin dışına yazılır

    cout << "Merhaba " << ad << endl;

    /* cin, girilen metnin diziye sığıp sığmadığını denetlemez.
     * Örneğin Abdurrahman (11 karakter) girilirse null karakteriyle
     * birlikte 12 karakter, 6 elemanlı diziye yazılmaya çalışılır.
     * Dizinin dışına yazılan karakterler başka değişkenlerin değerlerini
     * bozabilir ya da programın çökmesine yol açabilir. */

    return 0;
}
