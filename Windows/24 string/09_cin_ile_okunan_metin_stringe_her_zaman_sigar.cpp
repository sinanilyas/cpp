#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string ad;

    cout << "Adınızı giriniz: ";

    /* cin ile string'e metin okunabilir. Karakter dizilerinden farklı
     * olarak eleman sayısı sınırı yoktur. Girilen metin uzun olsa da
     * string gereken yeri kendisi ayarlar. Dizinin dışına yazma tehlikesi
     * yoktur. */
    cin >> ad;

    cout << "Merhaba " << ad << endl;

    /* Karakter dizilerinde olduğu gibi cin, bir boşluk karakterine
     * (boşluk, sekme, Enter) gelince okumayı keser. Baştaki boşluklar
     * atlanır. Girilen metne göre okunan metin:
     *
     * Abdurrahman   -> Abdurrahman
     * Ahmet Kaya    -> Ahmet */

    return 0;
}
