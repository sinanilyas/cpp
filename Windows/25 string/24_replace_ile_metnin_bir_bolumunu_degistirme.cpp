#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string cumle = "Merhaba, kola ister misin?";

    /* replace(konum, n, metin) konum indisinden başlayan n karakteri siler
     * ve yerine verilen metni yerleştirir. Silinen bölüm ile yerleştirilen
     * metnin uzunlukları farklı olabilir. */
    cumle.replace(9, 4, "kahve"); // "kola" silinir, yerine "kahve" yazılır

    cout << cumle << endl; // Merhaba, kahve ister misin?

    return 0;
}
