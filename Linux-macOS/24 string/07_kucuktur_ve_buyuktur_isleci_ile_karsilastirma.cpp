#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* <, >, <= ve >= işleçleri metinleri strcmp gibi karakter karakter,
     * ASCII kodlarına göre karşılaştırır. Sıralamada önce gelen metin
     * küçük kabul edilir. */
    string ad1 = "Ali";
    string ad2 = "Aleyna";
    string ad3 = "Zeynep";
    string ad4 = "ali";

    cout << boolalpha;

    cout << (ad1 < ad3) << endl; // true: 'A' (65) < 'Z' (90)
    cout << (ad1 < ad2) << endl; // false: 'i' (105) > 'e' (101)
    cout << (ad3 < ad4) << endl; // true: 'Z' (90) < 'a' (97)

    /* Büyük harfler ASCII tablosunda küçük harflerden önce geldiği için
     * "Zeynep", "ali"den önce gelir. Türkçe harfler (ç, ğ, ı, ö, ş, ü...)
     * de alfabedeki yerlerine göre sıralanmaz. */

    return 0;
}
