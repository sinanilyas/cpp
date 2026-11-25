#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string kelime;
    string ters; // Başlangıçta boş metin

    cout << "Bir kelime giriniz: ";
    cin >> kelime;

    /* Karakterler baştan sona dolaşılır ve her karakter ters metnin başına
     * eklenir. Böylece ilk karakter en sona, son karakter en başa yerleşir.
     * kelime[i] bir karakter, ters ise bir string olduğu için + işleciyle
     * birleştirilebilir. */
    for (size_t i = 0; i < kelime.length(); i++)
    {
        ters = kelime[i] + ters;
    }

    cout << "Tersi: " << ters << endl;

    // Tersten de aynı okunan kelimelere palindrom denir.
    if (kelime == ters)
    {
        cout << kelime << " bir palindromdur." << endl;
    }
    else
    {
        cout << kelime << " bir palindrom değildir." << endl;
    }

    /* kabak girildiğinde:
     * Tersi: kabak
     * kabak bir palindromdur.
     *
     * kalem girildiğinde:
     * Tersi: melak
     * kalem bir palindrom değildir.
     *
     * Türkçe harfler iki karakter yer kapladığı için ters çevrildiğinde
     * bozulur. Bu örnekte Türkçe harf içermeyen kelimeler girilmelidir. */

    return 0;
}
