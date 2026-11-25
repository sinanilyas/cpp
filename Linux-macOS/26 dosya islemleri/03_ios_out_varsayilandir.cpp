#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
    /* ios::out varsayılan dosya açma yöntemidir.
     * Yazılmasa da yazılmış gibi kabul edilir. */

    // Dosyayı aç, zaten varsa içeriğini sil
    ofstream dosya("sehirler.txt");

    dosya << "Sakarya " << 54 << endl;

    cout << "sehirler.txt dosyasına yazıldı." << endl;

    /* sehirler.txt dosyasının içeriği:
     * Sakarya 54
     */

    return 0;
}
