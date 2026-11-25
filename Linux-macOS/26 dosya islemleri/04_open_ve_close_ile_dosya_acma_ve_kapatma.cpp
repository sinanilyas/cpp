#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
    /* Dosya değişkeni dosya adı yazılmadan da tanımlanabilir.
     * Dosya daha sonra open komutuyla açılır. */

    // Dosya değişkenini oluştur
    ofstream dosya;

    // Dosyayı aç
    dosya.open("tek_sayilar.txt");

    for (int i = 1; i <= 9; i += 2)
    {
        dosya << i << " ";
    }
    dosya << endl;

    /* İşi biten dosya close ile kapatılmalıdır.
     * Eğer dosya close ile kapatılmazsa, değişkenin tanımlandığı blok
     * sona erdiğinde kendiliğinden kapatılır. Ancak dosyaya yazılanlar
     * dosya kapatılana kadar diske aktarılmayabilir. */
    dosya.close();

    cout << "Dosyaya yazıldı." << endl;

    return 0;
}
