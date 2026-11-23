#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* string tipinde dizi tanımlanabilir. Her eleman ayrı bir metin
     * saklar ve metinlerin uzunlukları farklı olabilir.
     *
     * Karakter dizileriyle birden fazla metin saklamak için iki boyutlu
     * bir char dizisi gerekir (ör. char isimler[3][12]). Her satırın eleman
     * sayısı en uzun metne ve null karakterine göre belirlenir. */
    string isimler[3] = {"Ali", "Zeynep", "Abdurrahman"};

    for (int i = 0; i < 3; i++)
    {
        cout << isimler[i] << endl;
    }

    /* Ekran çıktısı:
     * Ali
     * Zeynep
     * Abdurrahman
     */

    return 0;
}
