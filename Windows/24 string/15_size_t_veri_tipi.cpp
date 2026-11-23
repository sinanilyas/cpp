#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* size_t, metin uzunluklarını, dizi boyutlarını ve indisleri saklamak
     * için kullanılan işaretsiz (unsigned) bir tamsayı tipidir. length ve
     * size fonksiyonları size_t tipinde değer döndürür. sizeof işlecinin
     * sonucu da size_t tipindedir. */
    string sehir = "Sakarya";
    size_t uzunluk = sehir.length();

    cout << uzunluk << endl; // 7

    // size_t'nin boyutu programın 32 bit ya da 64 bit olarak derlenmesine göre değişir.
    cout << sizeof(size_t) << endl; // 64 bit programlarda 8, 32 bit programlarda 4

    /* Diğer unsigned tiplerde olduğu gibi size_t de negatif sayı saklayamaz.
     * İşlemin sonucu negatif olursa çok büyük bir sayıya dönüşür. Örneğin
     * boş bir metinde length() - 1 işleminin sonucu -1 değil, size_t'nin
     * saklayabileceği en büyük değerdir. */

    string bos = "";
    cout << bos.length() - 1 << endl;

    /* 64 bit programlarda 18446744073709551615,
     * 32 bit programlarda 4294967295 yazar. */

    return 0;
}
