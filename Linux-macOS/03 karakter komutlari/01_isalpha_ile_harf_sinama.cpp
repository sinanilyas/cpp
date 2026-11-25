#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* <cctype> dosyasında tek bir karakteri sınayan ya da dönüştüren
     * komutlar bulunur. Bu komutları kullanmak için <cctype> dosyası
     * programa dahil edilmelidir.
     *
     * Bazı derleyicilerde <cctype> yazılmasa da program derlenebilir,
     * çünkü <iostream> bu dosyayı dolaylı olarak dahil edebilir.
     * Ancak buna güvenilmemeli, <cctype> her zaman yazılmalıdır. */

    /* isalpha komutu, parantez içine yazılan karakterin harf olup
     * olmadığını sınar. Sonuç bool tipli bir değişkene atanırsa
     * karakter harfse 1, değilse 0 saklanır. */

    bool sonuc1 = isalpha('R');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = isalpha('r');
    cout << sonuc2 << endl; // 1

    bool sonuc3 = isalpha('7');
    cout << sonuc3 << endl; // 0

    bool sonuc4 = isalpha('%');
    cout << sonuc4 << endl; // 0

    return 0;
}
