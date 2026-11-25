#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    char ad[20];

    cout << "Adınızı giriniz: ";

    /* cin ile karakter dizisine metin okunabilir. Okunan karakterlerin
     * sonuna null karakteri otomatik olarak eklenir. */
    cin >> ad;

    cout << "Adınız: " << ad << endl;

    /* cin, bir boşluk karakterine (boşluk, sekme, Enter) gelince
     * okumayı keser. Baştaki boşluklar atlanır. Girilen metne göre
     * diziye okunan metin:
     *
     * Ahmet         -> Ahmet
     *    Ahmet      -> Ahmet
     * Ahmet Kaya    -> Ahmet
     */

    return 0;
}
