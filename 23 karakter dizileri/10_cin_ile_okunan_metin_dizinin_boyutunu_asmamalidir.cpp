#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* 6 elemanlý diziye en fazla 5 karakterlik bir metin okunabilir.
     * Son eleman null karakteri için gereklidir. */
    char ad[6];

    cout << "Adýnýzý giriniz: ";
    cin >> ad; // MANTIK HATASI: Girilen metin uzunsa dizinin dýþýna yazýlýr

    cout << "Merhaba " << ad << endl;

    /* cin, girilen metnin diziye sýðýp sýðmadýðýný denetlemez.
     * Örneðin Abdurrahman (11 karakter) girilirse null karakteriyle
     * birlikte 12 karakter, 6 elemanlý diziye yazýlmaya çalýþýlýr.
     * Dizinin dýþýna yazýlan karakterler baþka deðiþkenlerin deðerlerini
     * bozabilir ya da programýn çökmesine yol açabilir. */

    return 0;
}
