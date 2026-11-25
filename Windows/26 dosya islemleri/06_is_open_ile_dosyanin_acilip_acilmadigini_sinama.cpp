#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dosya her zaman açılamayabilir. Okunacak dosya yoksa, adı yanlış
     * yazıldıysa ya da dosya programın çalıştığı klasörde değilse dosya
     * açılamaz ve dosyadan okuma yapılamaz.
     *
     * is_open fonksiyonu dosya başarılı bir şekilde açıldıysa true,
     * açılamadıysa false döndürür.
     * Dosya kullanılmadan önce is_open ile denetlenmelidir. */
    ifstream dosya("olmayan_dosya.txt");

    if (dosya.is_open())
    {
        cout << "Dosya açıldı." << endl;
        dosya.close();
    }
    else
    {
        cout << "Dosya açılamadı." << endl;
    }

    /* Dosya adı klasör yolu olmadan yazıldığında dosya, programın
     * çalıştığı klasörde aranır. Bu klasör genellikle .cpp dosyasının ya
     * da projenin bulunduğu klasördür, ancak kullanılan IDE'ye ve
     * ayarlarına göre değişebilir. Okunacak .txt dosyaları bulunamazsa
     * programın çalıştığı klasöre kopyalanmalıdır.
     *
     * Yazmak için açılan dosyalar da açılamayabilir. Örneğin dosya var
     * olmayan bir klasörde oluşturulmak istenirse ya da klasöre yazma izni
     * yoksa dosya açılamaz. Bu nedenle ofstream değişkenleri de is_open
     * ile denetlenir. */

    return 0;
}
