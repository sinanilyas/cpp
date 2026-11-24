#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string cumle = "Hava";

    /* += işleci metnin sonuna ekleme yapar. Diğer bileşik atama
     * işleçlerinde olduğu gibi cumle += " bugün"; ile
     * cumle = cumle + " bugün"; aynı işi yapar. */
    cumle += " bugün";

    /* Sonuna ekleme için append fonksiyonu da kullanılabilir */
    cumle.append(" çok sıcak");

    // Tek bir karakter de eklenebilir.
    cumle += '!';

    cout << cumle << endl; // Hava bugün çok sıcak!

    return 0;
}
