#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* Metinler karakter dizilerinin yanı sıra string tipindeki
     * değişkenlerde de saklanabilir. string tipini kullanmak için
     * <string> başlık dosyası eklenir. Bazı derleyicilerde <string>
     * eklenmeden de string kullanılabilir, ancak programın her derleyicide
     * çalışması için eklenmelidir.
     *
     * Karakter dizilerinden farklı olarak eleman sayısı yazılmaz ve null
     * karakteri için yer ayırmak gerekmez. string, metnin uzunluğu kadar
     * yeri kendisi ayarlar. */
    string ad = "Ali";

    cout << ad << endl; // Ali

    // Sabit metinlerle birlikte de yazdırılabilir.
    cout << "Merhaba " << ad << "!" << endl; // Merhaba Ali!

    /* Başlangıç değeri verilmeyen string değişkeni boş bir metinle ("")
     * başlar. Başlangıç değeri verilmeyen karakter dizilerinde olduğu gibi
     * anlamsız karakterler içermez. */

    return 0;
}
