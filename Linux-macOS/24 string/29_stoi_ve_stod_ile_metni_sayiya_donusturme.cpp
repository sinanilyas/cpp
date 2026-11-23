#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* stoi metni int tipine, stod ise double tipine dönüştürür.
     * Karakter dizilerindeki atoi ve atof gibi baştaki boşlukları atlar
     * ve sayıya ait olmayan ilk karakterde durur. stod ondalık ayırıcı
     * olarak nokta kullanır. */
    string metin1 = "123";
    string metin2 = "3.14";
    string metin3 = "45kg";

    int sayi1 = stoi(metin1);
    double sayi2 = stod(metin2);
    int sayi3 = stoi(metin3);

    cout << sayi1 + 1 << endl; // 124
    cout << sayi2 * 2 << endl; // 6.28
    cout << sayi3 << endl;     // 45 ('k' görünce durur)

    /* atoi ve atof'tan farklı olarak metin bir sayıyla başlamıyorsa 0
     * döndürülmez, program bir hata mesajıyla sonlanır. Örneğin
     * stoi("abc") programı sonlandırır. */

    return 0;
}
