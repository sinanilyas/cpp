#include <iostream>
#include <fstream> // Dosya işlemleri için
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dosyaya yazmak için ofstream tipinde bir değişken tanımlanır.
     * Eğer dosya önceden kayıtlıysa içindekiler silinir. */
    ofstream dosya("sehirler.txt", ios::out);

    /* Dosyaya yazma işlemi tıpkı cout ile ekrana yazdırmaya benzer.
     * Metinler, sayılar ve endl kullanılabilir. */
    dosya << "Sakarya " << 54 << endl;
    dosya << "Bursa " << 16 << endl;
    dosya << "Ankara " << 6 << endl;

    cout << "sehirler.txt dosyasına yazıldı." << endl;

    /* Dosya adı klasör yolu olmadan yazıldığı için, dosya programın
     * çalıştığı klasörde oluşturulur. Bu dosya bir metin
     * düzenleyiciyle açılarak içeriği görülebilir. */

    return 0;
}
