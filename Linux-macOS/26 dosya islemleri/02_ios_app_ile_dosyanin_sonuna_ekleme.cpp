#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
    /* ios::out
     *    - Dosya yoksa oluştur
     *    - Dosya varsa içindekileri sil
     * ios::app
     *    - Dosya yoksa oluştur
     *    - Dosya varsa içindekileri silme, sonuna ekle */

    ofstream dosya("sehirler.txt", ios::app);

    dosya << "Konya " << 42 << endl;

    cout << "sehirler.txt dosyasının sonuna eklendi." << endl;

    /* Program her çalıştırıldığında dosyanın sonuna
     * bir satır daha eklenir. */

    return 0;
}
