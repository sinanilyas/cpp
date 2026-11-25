#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
