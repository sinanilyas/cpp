#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* <, >, <= ve >= işleçleri metinleri strcmp gibi karakter karakter,
     * ASCII kodlarına göre karşılaştırır. Sıralamada önce gelen metin
     * küçük kabul edilir. */
    string ad1 = "Ali";
    string ad2 = "Aleyna";
    string ad3 = "Zeynep";
    string ad4 = "ali";

    cout << boolalpha;

    cout << (ad1 < ad3) << endl; // true (Ali, Zeynep'ten önce gelir)
    cout << (ad1 < ad2) << endl; // false (Ali, Aleyna'dan sonra gelir)
    cout << (ad3 < ad4) << endl; // true (Zeynep, ali'den önce gelir)

    /* Büyük harfler ASCII tablosunda küçük harflerden
     * önce geldiği için "Zeynep", "ali"den önce gelir.
     * Türkçe harfler (ç, ğ, ı, ö, ş, ü...)
     * de alfabedeki yerlerine göre sıralanmaz. */

    return 0;
}
